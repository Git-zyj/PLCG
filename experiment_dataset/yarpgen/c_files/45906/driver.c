#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2046233535674822385LL;
long long int var_2 = 3710297955810414809LL;
unsigned char var_4 = (unsigned char)255;
long long int var_5 = 2973345878642585661LL;
unsigned long long int var_6 = 17690926082703915385ULL;
unsigned short var_11 = (unsigned short)51380;
int zero = 0;
signed char var_14 = (signed char)-42;
unsigned char var_15 = (unsigned char)165;
unsigned long long int var_16 = 1782593725725770052ULL;
unsigned int var_17 = 3208443971U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
