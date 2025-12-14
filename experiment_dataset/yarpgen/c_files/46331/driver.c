#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-34;
short var_6 = (short)11462;
short var_7 = (short)4038;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-75;
unsigned long long int var_10 = 6359320694325700537ULL;
unsigned long long int var_11 = 113943362763520327ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)198;
signed char var_14 = (signed char)-88;
signed char var_15 = (signed char)-13;
unsigned char var_16 = (unsigned char)122;
signed char var_17 = (signed char)-85;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
