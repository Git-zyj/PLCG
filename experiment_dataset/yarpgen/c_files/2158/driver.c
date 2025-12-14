#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-27266;
long long int var_6 = 7860802215046401565LL;
signed char var_12 = (signed char)97;
int zero = 0;
short var_15 = (short)-13957;
unsigned char var_16 = (unsigned char)173;
unsigned char var_17 = (unsigned char)213;
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
