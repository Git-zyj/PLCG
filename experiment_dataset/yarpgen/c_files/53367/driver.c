#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1566365930;
signed char var_2 = (signed char)-67;
unsigned char var_7 = (unsigned char)143;
long long int var_11 = 9132797934696673121LL;
signed char var_16 = (signed char)-123;
unsigned char var_18 = (unsigned char)91;
int zero = 0;
int var_20 = -284277435;
int var_21 = -515473019;
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
