#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 3995843283U;
unsigned long long int var_10 = 6163453383015314903ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)64;
unsigned short var_13 = (unsigned short)56764;
unsigned short var_14 = (unsigned short)46588;
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
