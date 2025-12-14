#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_7 = (_Bool)1;
unsigned int var_9 = 3770187688U;
short var_10 = (short)-27233;
signed char var_14 = (signed char)-127;
int zero = 0;
signed char var_15 = (signed char)-114;
_Bool var_16 = (_Bool)1;
short var_17 = (short)-32043;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
