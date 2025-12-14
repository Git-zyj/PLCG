#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8719978383846191474LL;
short var_1 = (short)22470;
unsigned char var_2 = (unsigned char)82;
unsigned char var_3 = (unsigned char)135;
unsigned long long int var_4 = 9399058803219356059ULL;
unsigned int var_6 = 4001112685U;
unsigned int var_7 = 467037210U;
unsigned short var_8 = (unsigned short)43377;
unsigned long long int var_10 = 13349525066814580540ULL;
int zero = 0;
unsigned long long int var_11 = 4093010683835054536ULL;
int var_12 = 654557724;
unsigned short var_13 = (unsigned short)47874;
unsigned long long int var_14 = 16012538421405967018ULL;
unsigned short var_15 = (unsigned short)59692;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
