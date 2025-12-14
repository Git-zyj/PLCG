#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)26103;
unsigned char var_4 = (unsigned char)225;
signed char var_5 = (signed char)106;
unsigned char var_7 = (unsigned char)128;
unsigned char var_8 = (unsigned char)59;
signed char var_9 = (signed char)66;
int zero = 0;
unsigned char var_10 = (unsigned char)186;
signed char var_11 = (signed char)102;
short var_12 = (short)12758;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
