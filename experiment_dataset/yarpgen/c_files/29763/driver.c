#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)253;
unsigned int var_3 = 559689772U;
unsigned char var_4 = (unsigned char)122;
unsigned long long int var_9 = 2896865111857913157ULL;
int var_13 = -1625725931;
int zero = 0;
unsigned short var_14 = (unsigned short)16640;
signed char var_15 = (signed char)38;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
