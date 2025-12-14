#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2145320370;
signed char var_1 = (signed char)-98;
unsigned short var_3 = (unsigned short)34142;
signed char var_4 = (signed char)17;
unsigned short var_8 = (unsigned short)37233;
unsigned int var_10 = 2537384670U;
unsigned char var_11 = (unsigned char)152;
long long int var_12 = -8303544169701280798LL;
signed char var_16 = (signed char)87;
short var_17 = (short)-32173;
int zero = 0;
int var_20 = 1791973465;
unsigned long long int var_21 = 15786811923910942882ULL;
void init() {
}

void checksum() {
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
