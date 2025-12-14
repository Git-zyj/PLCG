#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_13 = 1666807686403998742ULL;
_Bool var_16 = (_Bool)1;
int zero = 0;
short var_18 = (short)24728;
unsigned long long int var_19 = 7223129485664297245ULL;
unsigned int var_20 = 3054038536U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
