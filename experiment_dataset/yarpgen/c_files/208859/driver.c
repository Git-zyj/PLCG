#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)29394;
signed char var_1 = (signed char)-88;
unsigned int var_2 = 1169253704U;
unsigned short var_3 = (unsigned short)16225;
unsigned char var_4 = (unsigned char)109;
short var_6 = (short)-443;
unsigned short var_7 = (unsigned short)9255;
int var_9 = -606060630;
short var_11 = (short)22522;
unsigned long long int var_15 = 16751976469789085156ULL;
int zero = 0;
short var_16 = (short)16176;
short var_17 = (short)27615;
unsigned long long int var_18 = 396420552806188203ULL;
unsigned int var_19 = 1928724755U;
int var_20 = 1868269732;
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
