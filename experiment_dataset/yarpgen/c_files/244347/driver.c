#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)5000;
_Bool var_7 = (_Bool)0;
short var_8 = (short)4593;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 2438694067U;
short var_20 = (short)-27990;
void init() {
}

void checksum() {
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
