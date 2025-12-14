#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)60;
unsigned char var_6 = (unsigned char)68;
unsigned char var_7 = (unsigned char)50;
int zero = 0;
unsigned char var_11 = (unsigned char)224;
unsigned char var_12 = (unsigned char)222;
unsigned char var_13 = (unsigned char)3;
unsigned char var_14 = (unsigned char)66;
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
