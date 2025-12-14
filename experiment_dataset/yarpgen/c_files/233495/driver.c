#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9742346695194586801ULL;
int var_3 = -304536627;
signed char var_5 = (signed char)-94;
int var_6 = 1394453551;
unsigned short var_7 = (unsigned short)28216;
unsigned char var_9 = (unsigned char)5;
int zero = 0;
short var_15 = (short)-4213;
signed char var_16 = (signed char)-101;
void init() {
}

void checksum() {
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
