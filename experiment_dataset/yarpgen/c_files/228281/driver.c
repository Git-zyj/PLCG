#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 931382411;
short var_3 = (short)11110;
unsigned char var_4 = (unsigned char)117;
unsigned char var_5 = (unsigned char)16;
unsigned char var_6 = (unsigned char)228;
int var_7 = 1132989893;
unsigned long long int var_10 = 12907026973074270821ULL;
unsigned char var_12 = (unsigned char)253;
int zero = 0;
unsigned int var_15 = 2920183923U;
short var_16 = (short)-18156;
signed char var_17 = (signed char)105;
unsigned int var_18 = 857791347U;
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
