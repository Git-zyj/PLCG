#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17467;
unsigned long long int var_2 = 3350357017490301882ULL;
unsigned short var_3 = (unsigned short)11306;
int var_5 = 1603220249;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-8667;
unsigned long long int var_11 = 756340462305597587ULL;
unsigned char var_12 = (unsigned char)223;
int zero = 0;
unsigned char var_13 = (unsigned char)98;
unsigned long long int var_14 = 4636801278072068348ULL;
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
