#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)6;
_Bool var_7 = (_Bool)0;
unsigned int var_9 = 1817093733U;
int zero = 0;
unsigned long long int var_12 = 4134556098693138860ULL;
unsigned char var_13 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
