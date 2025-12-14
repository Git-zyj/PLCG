#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6022425786053611706LL;
unsigned long long int var_1 = 1321988877737717542ULL;
short var_2 = (short)-20758;
unsigned long long int var_3 = 12372195035334775958ULL;
unsigned long long int var_4 = 7802109793339694813ULL;
short var_7 = (short)30070;
_Bool var_8 = (_Bool)0;
unsigned long long int var_9 = 16215543018656852549ULL;
int zero = 0;
short var_10 = (short)20250;
unsigned long long int var_11 = 7286616884985164085ULL;
unsigned long long int var_12 = 16049341260529838759ULL;
short var_13 = (short)6049;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
