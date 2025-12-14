#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)2772;
int var_2 = -1130547934;
long long int var_8 = -5957274120520381728LL;
unsigned long long int var_9 = 5471671605271192591ULL;
unsigned int var_13 = 1180699504U;
int var_15 = 146648500;
int zero = 0;
short var_16 = (short)12630;
unsigned short var_17 = (unsigned short)6661;
unsigned int var_18 = 3785447010U;
unsigned short var_19 = (unsigned short)21190;
short var_20 = (short)9841;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
