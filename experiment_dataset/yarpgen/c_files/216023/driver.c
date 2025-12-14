#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)101;
int var_9 = -1244364246;
short var_10 = (short)-8150;
unsigned char var_15 = (unsigned char)126;
int zero = 0;
unsigned long long int var_16 = 2142310834785311460ULL;
int var_17 = -513459451;
signed char var_18 = (signed char)31;
int var_19 = -1998371597;
unsigned short var_20 = (unsigned short)22921;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
