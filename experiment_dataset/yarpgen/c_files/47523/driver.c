#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)78;
signed char var_5 = (signed char)10;
short var_9 = (short)-13977;
unsigned short var_12 = (unsigned short)11180;
int zero = 0;
unsigned int var_15 = 2924167633U;
short var_16 = (short)3905;
int var_17 = -2039299926;
signed char var_18 = (signed char)-57;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
