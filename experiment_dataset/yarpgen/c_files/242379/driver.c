#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)73;
signed char var_2 = (signed char)99;
unsigned char var_3 = (unsigned char)54;
unsigned char var_6 = (unsigned char)82;
unsigned char var_8 = (unsigned char)83;
unsigned char var_9 = (unsigned char)108;
int zero = 0;
signed char var_10 = (signed char)-86;
unsigned char var_11 = (unsigned char)79;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
