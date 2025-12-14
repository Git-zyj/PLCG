#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2611374444772349242LL;
unsigned short var_5 = (unsigned short)22105;
unsigned long long int var_8 = 5648941653745022211ULL;
_Bool var_9 = (_Bool)0;
int zero = 0;
long long int var_11 = 3587249766037042673LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = 9085660117907363433LL;
long long int var_14 = -7836117524261803013LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
