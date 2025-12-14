#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2909008678U;
int var_3 = -492586040;
long long int var_5 = -5050627194572026122LL;
unsigned char var_7 = (unsigned char)17;
int var_8 = 1225080944;
int var_10 = 99737100;
int var_11 = 34248772;
int zero = 0;
unsigned short var_12 = (unsigned short)51049;
_Bool var_13 = (_Bool)0;
long long int var_14 = -5699343727682049696LL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 11250920271998304584ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
