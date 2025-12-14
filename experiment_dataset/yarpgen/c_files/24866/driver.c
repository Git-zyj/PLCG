#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)241;
int var_8 = -1586304157;
unsigned short var_9 = (unsigned short)33226;
unsigned short var_10 = (unsigned short)61754;
unsigned short var_13 = (unsigned short)24587;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 2709703043U;
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
