#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1075156980U;
unsigned char var_1 = (unsigned char)24;
unsigned int var_12 = 744459238U;
int zero = 0;
unsigned long long int var_13 = 5325839762204134105ULL;
signed char var_14 = (signed char)94;
unsigned int var_15 = 106593308U;
unsigned short var_16 = (unsigned short)32667;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
