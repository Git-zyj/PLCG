#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-23424;
short var_2 = (short)19648;
unsigned short var_5 = (unsigned short)56468;
signed char var_8 = (signed char)-110;
unsigned short var_10 = (unsigned short)65526;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 2186557585036556276ULL;
int zero = 0;
unsigned char var_15 = (unsigned char)66;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
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
