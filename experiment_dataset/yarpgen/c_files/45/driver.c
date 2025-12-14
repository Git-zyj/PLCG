#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_3 = 16142294123344536149ULL;
_Bool var_5 = (_Bool)0;
int var_6 = -2144844286;
int var_17 = -1949099143;
long long int var_18 = -4665216316558487063LL;
int zero = 0;
signed char var_19 = (signed char)43;
unsigned char var_20 = (unsigned char)92;
_Bool var_21 = (_Bool)0;
int var_22 = 1205364643;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
