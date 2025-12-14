#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1942553963U;
short var_5 = (short)-9015;
unsigned char var_7 = (unsigned char)94;
int var_8 = 1819222897;
long long int var_9 = -7962251099678559705LL;
long long int var_14 = -1782343086468094451LL;
unsigned char var_18 = (unsigned char)70;
int zero = 0;
unsigned long long int var_19 = 1600071061458685410ULL;
signed char var_20 = (signed char)45;
short var_21 = (short)30645;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
