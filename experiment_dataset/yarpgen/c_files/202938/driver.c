#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)165;
short var_4 = (short)-31809;
unsigned char var_5 = (unsigned char)151;
unsigned long long int var_9 = 3298385257623411546ULL;
int zero = 0;
short var_12 = (short)-4530;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 1328475239U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
