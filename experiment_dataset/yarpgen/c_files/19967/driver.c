#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)88;
long long int var_11 = 1612748671712957196LL;
unsigned char var_12 = (unsigned char)21;
signed char var_13 = (signed char)-15;
int zero = 0;
int var_16 = -1279599655;
_Bool var_17 = (_Bool)0;
unsigned int var_18 = 3090411729U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
