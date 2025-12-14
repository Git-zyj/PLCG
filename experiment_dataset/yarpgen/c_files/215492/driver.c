#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = -4707736508656650758LL;
unsigned long long int var_6 = 3345807240872984350ULL;
int var_8 = 218582774;
int zero = 0;
_Bool var_10 = (_Bool)0;
short var_11 = (short)2521;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
