#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 542414298;
_Bool var_3 = (_Bool)0;
unsigned char var_4 = (unsigned char)0;
unsigned int var_13 = 2532189633U;
unsigned char var_14 = (unsigned char)5;
unsigned long long int var_15 = 8046336345928924444ULL;
short var_16 = (short)29840;
int zero = 0;
unsigned short var_18 = (unsigned short)4988;
short var_19 = (short)8452;
void init() {
}

void checksum() {
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
