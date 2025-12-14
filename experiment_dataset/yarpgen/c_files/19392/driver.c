#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3714750202728162074ULL;
unsigned long long int var_9 = 6853082158700117579ULL;
unsigned short var_12 = (unsigned short)43850;
int zero = 0;
unsigned int var_16 = 2902695772U;
int var_17 = -67425661;
unsigned short var_18 = (unsigned short)57414;
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
