#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned int var_8 = 2531090136U;
unsigned short var_15 = (unsigned short)29894;
signed char var_17 = (signed char)-69;
int zero = 0;
short var_18 = (short)-28987;
_Bool var_19 = (_Bool)1;
int var_20 = 37573138;
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
