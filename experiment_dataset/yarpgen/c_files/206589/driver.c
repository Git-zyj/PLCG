#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)15800;
unsigned short var_12 = (unsigned short)9376;
short var_17 = (short)12504;
_Bool var_19 = (_Bool)0;
int zero = 0;
long long int var_20 = -1998187081896418963LL;
unsigned int var_21 = 3061520150U;
void init() {
}

void checksum() {
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
