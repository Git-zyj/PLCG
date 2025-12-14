#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1338998104U;
unsigned char var_2 = (unsigned char)100;
_Bool var_11 = (_Bool)1;
unsigned long long int var_14 = 8129800252398290424ULL;
unsigned short var_15 = (unsigned short)50289;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)16422;
unsigned long long int var_20 = 13172527230904997371ULL;
void init() {
}

void checksum() {
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
