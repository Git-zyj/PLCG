#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)24260;
unsigned char var_5 = (unsigned char)205;
unsigned short var_6 = (unsigned short)1863;
unsigned char var_7 = (unsigned char)218;
unsigned short var_9 = (unsigned short)39004;
unsigned char var_10 = (unsigned char)97;
unsigned char var_14 = (unsigned char)90;
int zero = 0;
unsigned char var_15 = (unsigned char)97;
unsigned short var_16 = (unsigned short)38841;
unsigned short var_17 = (unsigned short)15962;
signed char var_18 = (signed char)-121;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
