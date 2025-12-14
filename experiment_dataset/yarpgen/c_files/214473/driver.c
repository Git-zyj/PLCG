#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)154;
unsigned long long int var_7 = 4053919795730480277ULL;
unsigned char var_8 = (unsigned char)115;
int var_12 = 1721473030;
int zero = 0;
unsigned char var_18 = (unsigned char)106;
signed char var_19 = (signed char)54;
unsigned char var_20 = (unsigned char)123;
unsigned long long int var_21 = 7953205641311561073ULL;
unsigned long long int var_22 = 4479808685908140544ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
