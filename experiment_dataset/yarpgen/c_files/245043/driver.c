#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3685772565U;
long long int var_1 = 1963196974367831673LL;
unsigned char var_2 = (unsigned char)239;
unsigned long long int var_7 = 7299387047241659738ULL;
unsigned short var_8 = (unsigned short)45832;
int zero = 0;
short var_11 = (short)27246;
short var_12 = (short)-27515;
int var_13 = -434947769;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
