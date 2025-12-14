#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 4148713926416319023ULL;
signed char var_4 = (signed char)31;
long long int var_9 = -6740866500592081239LL;
unsigned short var_11 = (unsigned short)5369;
int zero = 0;
unsigned char var_16 = (unsigned char)215;
short var_17 = (short)-29400;
void init() {
}

void checksum() {
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
