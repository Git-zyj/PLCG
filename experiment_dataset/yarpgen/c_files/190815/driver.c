#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)-32;
unsigned char var_5 = (unsigned char)127;
unsigned char var_6 = (unsigned char)174;
unsigned char var_8 = (unsigned char)4;
int zero = 0;
unsigned char var_11 = (unsigned char)72;
signed char var_12 = (signed char)-59;
signed char var_13 = (signed char)110;
unsigned char var_14 = (unsigned char)237;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
