#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)89;
unsigned short var_2 = (unsigned short)28905;
unsigned long long int var_5 = 7216452428271213183ULL;
long long int var_10 = 8958189858824396207LL;
signed char var_11 = (signed char)-18;
int zero = 0;
unsigned short var_15 = (unsigned short)46366;
unsigned char var_16 = (unsigned char)199;
unsigned short var_17 = (unsigned short)49962;
void init() {
}

void checksum() {
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
