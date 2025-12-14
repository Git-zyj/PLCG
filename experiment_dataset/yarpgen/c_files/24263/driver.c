#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2901670512U;
short var_2 = (short)28258;
long long int var_3 = 1799288128626784433LL;
int zero = 0;
unsigned short var_10 = (unsigned short)9886;
_Bool var_11 = (_Bool)1;
short var_12 = (short)23982;
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
