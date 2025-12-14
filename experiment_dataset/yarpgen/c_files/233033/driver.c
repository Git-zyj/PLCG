#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)18127;
unsigned char var_1 = (unsigned char)252;
unsigned short var_2 = (unsigned short)38617;
unsigned int var_4 = 4277308946U;
unsigned char var_5 = (unsigned char)239;
signed char var_6 = (signed char)-61;
int var_7 = 1552213461;
unsigned char var_8 = (unsigned char)185;
unsigned char var_9 = (unsigned char)185;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 2647718378134112331ULL;
int zero = 0;
signed char var_12 = (signed char)120;
unsigned short var_13 = (unsigned short)10460;
unsigned char var_14 = (unsigned char)152;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
