#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2266790420U;
unsigned char var_1 = (unsigned char)48;
signed char var_2 = (signed char)-10;
short var_3 = (short)30837;
long long int var_4 = -6623371347525758766LL;
long long int var_5 = -8886824894196245438LL;
signed char var_7 = (signed char)111;
long long int var_8 = 6582579449562096451LL;
short var_9 = (short)23506;
int zero = 0;
unsigned long long int var_11 = 13154618432506744075ULL;
signed char var_12 = (signed char)-3;
unsigned char var_13 = (unsigned char)160;
unsigned long long int var_14 = 14383602746846975044ULL;
void init() {
}

void checksum() {
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
