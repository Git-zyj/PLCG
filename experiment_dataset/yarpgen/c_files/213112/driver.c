#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1737053144;
signed char var_5 = (signed char)18;
signed char var_7 = (signed char)-98;
unsigned short var_8 = (unsigned short)8156;
int var_10 = 284155722;
unsigned short var_11 = (unsigned short)61011;
unsigned int var_19 = 2017738645U;
int zero = 0;
signed char var_20 = (signed char)-76;
short var_21 = (short)-20394;
unsigned int var_22 = 81462003U;
unsigned long long int var_23 = 1915211692209363898ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
