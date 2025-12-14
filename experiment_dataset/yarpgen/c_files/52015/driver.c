#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)8846;
unsigned long long int var_11 = 3810172817912455656ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)44104;
unsigned short var_15 = (unsigned short)45169;
unsigned short var_16 = (unsigned short)31098;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
