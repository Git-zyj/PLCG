#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)241;
short var_3 = (short)-7042;
unsigned char var_5 = (unsigned char)151;
unsigned char var_10 = (unsigned char)228;
short var_13 = (short)17006;
unsigned long long int var_15 = 16794635737453242067ULL;
unsigned short var_16 = (unsigned short)27117;
int zero = 0;
short var_17 = (short)29283;
signed char var_18 = (signed char)43;
signed char var_19 = (signed char)-68;
void init() {
}

void checksum() {
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
