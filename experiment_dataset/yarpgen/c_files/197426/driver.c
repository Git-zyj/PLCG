#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -1551841311;
_Bool var_2 = (_Bool)0;
long long int var_3 = -417035799018004507LL;
long long int var_7 = 3094810162015746661LL;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned short var_10 = (unsigned short)49369;
unsigned int var_11 = 1078608486U;
long long int var_12 = 6817553187106735164LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
