#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)76;
unsigned short var_6 = (unsigned short)34512;
unsigned char var_9 = (unsigned char)164;
int zero = 0;
unsigned short var_16 = (unsigned short)12616;
unsigned short var_17 = (unsigned short)28651;
unsigned long long int var_18 = 8136518419404528033ULL;
unsigned long long int var_19 = 4640175575876399323ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
