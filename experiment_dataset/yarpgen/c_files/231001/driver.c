#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1757732173U;
unsigned char var_6 = (unsigned char)255;
unsigned int var_10 = 216263078U;
unsigned short var_12 = (unsigned short)16821;
int zero = 0;
int var_20 = 621788368;
unsigned long long int var_21 = 13061799452966016879ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
