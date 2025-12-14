#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)137;
unsigned int var_2 = 1241902203U;
signed char var_3 = (signed char)-105;
short var_6 = (short)-1373;
unsigned char var_10 = (unsigned char)140;
unsigned char var_11 = (unsigned char)218;
int zero = 0;
unsigned char var_13 = (unsigned char)248;
short var_14 = (short)-31149;
int var_15 = 691003089;
unsigned long long int var_16 = 4139600798058912526ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
