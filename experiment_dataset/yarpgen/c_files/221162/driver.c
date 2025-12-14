#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)136;
unsigned char var_4 = (unsigned char)63;
unsigned int var_5 = 4142279619U;
unsigned char var_7 = (unsigned char)41;
unsigned int var_8 = 3000355651U;
unsigned int var_9 = 705364905U;
unsigned char var_18 = (unsigned char)223;
unsigned char var_19 = (unsigned char)179;
int zero = 0;
unsigned int var_20 = 3417026295U;
unsigned int var_21 = 4081092364U;
void init() {
}

void checksum() {
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
