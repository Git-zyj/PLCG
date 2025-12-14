#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)31;
short var_7 = (short)-32631;
short var_11 = (short)-20982;
unsigned char var_12 = (unsigned char)158;
unsigned char var_15 = (unsigned char)203;
int zero = 0;
unsigned int var_17 = 2570539080U;
int var_18 = 1195166162;
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
