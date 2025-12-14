#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1169991428;
signed char var_4 = (signed char)56;
unsigned char var_5 = (unsigned char)253;
unsigned char var_6 = (unsigned char)165;
short var_7 = (short)-13544;
unsigned int var_10 = 2194423715U;
unsigned long long int var_11 = 3932437622018487624ULL;
unsigned char var_13 = (unsigned char)42;
int zero = 0;
long long int var_16 = 8690710142536387490LL;
long long int var_17 = -791879981256336528LL;
unsigned long long int var_18 = 2988923918490449676ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
