#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1563658108;
short var_3 = (short)-31122;
unsigned short var_5 = (unsigned short)31003;
unsigned char var_7 = (unsigned char)102;
unsigned long long int var_12 = 14444568204634448223ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)100;
unsigned short var_17 = (unsigned short)35095;
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
