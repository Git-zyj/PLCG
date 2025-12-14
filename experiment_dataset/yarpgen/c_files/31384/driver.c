#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10883;
int var_2 = -734647652;
unsigned int var_8 = 313697034U;
int var_11 = 632375145;
int var_12 = 438092935;
int var_13 = 647529045;
unsigned int var_15 = 1710370146U;
unsigned int var_17 = 1195450286U;
int zero = 0;
int var_19 = -896238122;
unsigned long long int var_20 = 5357784367340184839ULL;
unsigned short var_21 = (unsigned short)57568;
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
