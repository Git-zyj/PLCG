#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_6 = 1605184473U;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 7109676678835659543ULL;
int zero = 0;
short var_17 = (short)9761;
unsigned short var_18 = (unsigned short)21692;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
