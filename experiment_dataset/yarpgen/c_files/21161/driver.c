#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 49922474753759636LL;
_Bool var_2 = (_Bool)0;
long long int var_4 = -219639360093596764LL;
unsigned long long int var_8 = 3712859322717237993ULL;
_Bool var_11 = (_Bool)0;
int zero = 0;
short var_13 = (short)8098;
unsigned short var_14 = (unsigned short)63220;
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
