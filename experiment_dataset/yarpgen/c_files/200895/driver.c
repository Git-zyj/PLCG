#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1915946105U;
unsigned char var_3 = (unsigned char)28;
_Bool var_6 = (_Bool)1;
int var_7 = 1510151224;
short var_8 = (short)-17505;
long long int var_10 = -8356945410092766556LL;
int zero = 0;
unsigned long long int var_12 = 5319255865187579332ULL;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
