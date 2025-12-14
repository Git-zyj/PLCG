#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3893382053066844777ULL;
unsigned int var_4 = 3897280730U;
signed char var_9 = (signed char)106;
unsigned short var_11 = (unsigned short)20460;
int zero = 0;
short var_13 = (short)30339;
unsigned long long int var_14 = 9529994161091484238ULL;
unsigned int var_15 = 1606801022U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
