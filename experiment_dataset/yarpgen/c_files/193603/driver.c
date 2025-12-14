#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 429220347;
signed char var_6 = (signed char)21;
int var_8 = -892452868;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 1866829776580834123ULL;
unsigned int var_12 = 559916758U;
int var_16 = -1551695121;
int zero = 0;
signed char var_17 = (signed char)13;
unsigned char var_18 = (unsigned char)6;
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
