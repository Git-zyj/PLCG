#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)1096;
signed char var_1 = (signed char)-7;
unsigned long long int var_3 = 710871864959064477ULL;
signed char var_6 = (signed char)-85;
short var_8 = (short)27519;
int var_10 = -1354235450;
unsigned char var_11 = (unsigned char)140;
signed char var_12 = (signed char)-46;
int zero = 0;
short var_18 = (short)8081;
unsigned int var_19 = 3705018113U;
int var_20 = 1303648381;
short var_21 = (short)-19861;
void init() {
}

void checksum() {
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
