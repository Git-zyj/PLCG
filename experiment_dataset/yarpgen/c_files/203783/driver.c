#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2454020635U;
unsigned int var_1 = 3646846960U;
signed char var_2 = (signed char)-63;
int zero = 0;
unsigned short var_11 = (unsigned short)7061;
unsigned char var_12 = (unsigned char)14;
long long int var_13 = -8189273684420723951LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
