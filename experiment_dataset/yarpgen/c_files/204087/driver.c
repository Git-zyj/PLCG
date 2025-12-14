#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-4089;
short var_5 = (short)-27025;
unsigned long long int var_8 = 8436745260909385790ULL;
unsigned long long int var_9 = 7427090396124612369ULL;
unsigned char var_10 = (unsigned char)41;
int zero = 0;
unsigned int var_11 = 1074624731U;
unsigned int var_12 = 4131154955U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
