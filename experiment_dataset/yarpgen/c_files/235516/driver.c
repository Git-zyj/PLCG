#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6055;
signed char var_2 = (signed char)-44;
signed char var_3 = (signed char)107;
unsigned char var_6 = (unsigned char)240;
unsigned long long int var_8 = 13760410811372737090ULL;
signed char var_11 = (signed char)-64;
int var_12 = 816782458;
unsigned short var_13 = (unsigned short)694;
signed char var_15 = (signed char)101;
int zero = 0;
unsigned int var_17 = 3934516366U;
signed char var_18 = (signed char)55;
unsigned short var_19 = (unsigned short)41678;
signed char var_20 = (signed char)-60;
unsigned short var_21 = (unsigned short)58842;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
