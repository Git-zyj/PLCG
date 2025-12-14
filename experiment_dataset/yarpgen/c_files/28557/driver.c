#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)77;
unsigned int var_3 = 3859551159U;
int var_6 = -1340092353;
unsigned char var_13 = (unsigned char)103;
signed char var_14 = (signed char)53;
int zero = 0;
short var_16 = (short)-20484;
unsigned short var_17 = (unsigned short)19996;
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
