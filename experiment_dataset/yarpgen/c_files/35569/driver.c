#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 13703156268879289350ULL;
unsigned char var_7 = (unsigned char)21;
_Bool var_9 = (_Bool)0;
short var_10 = (short)-9350;
unsigned char var_14 = (unsigned char)227;
unsigned long long int var_17 = 16556326639011569665ULL;
int zero = 0;
int var_18 = 1995772926;
signed char var_19 = (signed char)-26;
unsigned short var_20 = (unsigned short)22944;
unsigned short var_21 = (unsigned short)10760;
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
