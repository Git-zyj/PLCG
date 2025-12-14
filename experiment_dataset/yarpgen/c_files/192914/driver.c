#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-24;
short var_1 = (short)-13303;
short var_2 = (short)32129;
unsigned long long int var_5 = 6834564204217002518ULL;
unsigned int var_6 = 1147633918U;
unsigned char var_7 = (unsigned char)181;
unsigned long long int var_9 = 11301338252968169283ULL;
long long int var_11 = 3467681257422137491LL;
int zero = 0;
unsigned int var_12 = 2202227299U;
long long int var_13 = -3978483142501159215LL;
unsigned int var_14 = 224486718U;
void init() {
}

void checksum() {
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
