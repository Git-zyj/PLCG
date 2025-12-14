#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)36446;
unsigned long long int var_4 = 13815350440414977430ULL;
unsigned int var_10 = 4063065729U;
unsigned long long int var_13 = 11354731046938773859ULL;
unsigned int var_16 = 3787509033U;
signed char var_18 = (signed char)-70;
int zero = 0;
short var_20 = (short)-1664;
unsigned short var_21 = (unsigned short)43550;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
