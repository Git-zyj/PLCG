#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3906191460U;
unsigned short var_4 = (unsigned short)17479;
unsigned int var_5 = 1174708806U;
unsigned int var_7 = 2488933509U;
int var_8 = 1056872330;
unsigned int var_9 = 371405103U;
unsigned int var_14 = 4265750295U;
int zero = 0;
short var_16 = (short)-6661;
unsigned char var_17 = (unsigned char)21;
signed char var_18 = (signed char)-12;
unsigned int var_19 = 4043677974U;
unsigned int var_20 = 4008537764U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
