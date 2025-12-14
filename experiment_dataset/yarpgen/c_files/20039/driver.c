#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 17728103443112206171ULL;
unsigned long long int var_8 = 16375537073541757079ULL;
_Bool var_9 = (_Bool)0;
unsigned short var_10 = (unsigned short)2857;
short var_11 = (short)15847;
unsigned short var_13 = (unsigned short)46228;
unsigned int var_14 = 4036836361U;
int zero = 0;
int var_15 = 1388489651;
short var_16 = (short)-26074;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
