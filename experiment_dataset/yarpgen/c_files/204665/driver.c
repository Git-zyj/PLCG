#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2623108102U;
unsigned long long int var_3 = 5293929404256188462ULL;
short var_4 = (short)-3490;
short var_8 = (short)16836;
int zero = 0;
unsigned long long int var_16 = 8734427933455488723ULL;
short var_17 = (short)-29295;
unsigned long long int var_18 = 1994622578112551203ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
