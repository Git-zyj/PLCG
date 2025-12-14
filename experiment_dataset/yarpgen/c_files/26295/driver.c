#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3359732320244732838LL;
signed char var_2 = (signed char)-101;
short var_3 = (short)12078;
unsigned long long int var_6 = 12764646737367284185ULL;
unsigned int var_7 = 458660550U;
unsigned long long int var_8 = 361295409279061379ULL;
long long int var_10 = 1243073375405166654LL;
unsigned long long int var_13 = 6159627645795964742ULL;
unsigned int var_14 = 3724248567U;
unsigned long long int var_15 = 5450911218199178453ULL;
unsigned long long int var_17 = 231882921719933144ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)54388;
unsigned short var_19 = (unsigned short)15125;
short var_20 = (short)-5706;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
