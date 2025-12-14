#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)158;
unsigned short var_6 = (unsigned short)1898;
signed char var_8 = (signed char)-84;
unsigned int var_9 = 1323202816U;
int zero = 0;
unsigned int var_13 = 4104552602U;
unsigned int var_14 = 3946481813U;
void init() {
}

void checksum() {
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
