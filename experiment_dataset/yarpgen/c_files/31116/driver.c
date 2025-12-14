#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 39064611;
_Bool var_1 = (_Bool)0;
signed char var_6 = (signed char)-110;
long long int var_10 = -3534240238106081246LL;
long long int var_11 = 7904942783029152619LL;
int var_13 = -1926499428;
long long int var_14 = 609940741282139919LL;
unsigned char var_16 = (unsigned char)113;
int var_17 = 1202368137;
int zero = 0;
unsigned char var_18 = (unsigned char)133;
int var_19 = -1307924233;
int var_20 = 161212577;
long long int var_21 = 1065011201435700806LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
