#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)27146;
_Bool var_2 = (_Bool)0;
short var_7 = (short)12119;
short var_8 = (short)-1657;
int var_9 = -542786329;
unsigned int var_10 = 3331309001U;
long long int var_11 = 2542719021887969939LL;
int zero = 0;
unsigned long long int var_13 = 15317680538138586837ULL;
unsigned int var_14 = 1823792514U;
void init() {
}

void checksum() {
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
