#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
short var_2 = (short)-1941;
unsigned char var_4 = (unsigned char)160;
int var_5 = -903010006;
unsigned short var_7 = (unsigned short)32053;
unsigned short var_9 = (unsigned short)4188;
unsigned int var_10 = 2896813302U;
signed char var_11 = (signed char)-51;
int zero = 0;
unsigned char var_12 = (unsigned char)194;
_Bool var_13 = (_Bool)0;
void init() {
}

void checksum() {
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
