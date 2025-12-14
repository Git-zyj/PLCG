#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47743;
unsigned int var_2 = 1762249144U;
unsigned short var_3 = (unsigned short)12214;
signed char var_7 = (signed char)-11;
unsigned char var_8 = (unsigned char)214;
int zero = 0;
unsigned long long int var_10 = 238165732149019666ULL;
signed char var_11 = (signed char)-56;
signed char var_12 = (signed char)-4;
signed char var_13 = (signed char)72;
long long int var_14 = 431413416324185452LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
