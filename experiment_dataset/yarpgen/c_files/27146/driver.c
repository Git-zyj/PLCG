#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 1751891619U;
unsigned long long int var_6 = 7979622776079368111ULL;
_Bool var_7 = (_Bool)0;
short var_9 = (short)29974;
unsigned short var_10 = (unsigned short)65179;
int zero = 0;
unsigned short var_11 = (unsigned short)51946;
long long int var_12 = -3925518609699431877LL;
void init() {
}

void checksum() {
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
