#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 2864928474068922367ULL;
short var_4 = (short)-4368;
unsigned int var_5 = 3860192799U;
unsigned long long int var_10 = 15044868490922243999ULL;
int zero = 0;
short var_16 = (short)19277;
short var_17 = (short)-18223;
void init() {
}

void checksum() {
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
