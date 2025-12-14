#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)61782;
signed char var_9 = (signed char)-55;
unsigned int var_15 = 2522265237U;
unsigned int var_17 = 794325354U;
int zero = 0;
int var_18 = -707710325;
unsigned char var_19 = (unsigned char)179;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
