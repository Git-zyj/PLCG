#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 524216894U;
unsigned long long int var_3 = 12825135862949020470ULL;
int var_5 = -176975417;
int zero = 0;
int var_10 = 308219519;
unsigned short var_11 = (unsigned short)40456;
unsigned short var_12 = (unsigned short)12543;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
