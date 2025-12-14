#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1324810037;
unsigned short var_3 = (unsigned short)42808;
int var_5 = 1092909130;
unsigned char var_7 = (unsigned char)223;
signed char var_8 = (signed char)-60;
signed char var_11 = (signed char)9;
int zero = 0;
unsigned short var_13 = (unsigned short)56680;
unsigned int var_14 = 966889254U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
