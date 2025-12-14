#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-1925;
short var_1 = (short)28574;
short var_2 = (short)-30570;
int var_4 = -800164326;
signed char var_7 = (signed char)-115;
int var_11 = -1639719156;
int zero = 0;
int var_12 = -6210156;
unsigned short var_13 = (unsigned short)13632;
unsigned long long int var_14 = 13255659469390999108ULL;
unsigned long long int var_15 = 12367121533760905470ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
