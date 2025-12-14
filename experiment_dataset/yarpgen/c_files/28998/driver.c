#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)139;
unsigned char var_4 = (unsigned char)142;
unsigned char var_7 = (unsigned char)244;
unsigned char var_8 = (unsigned char)176;
int zero = 0;
unsigned char var_11 = (unsigned char)224;
unsigned char var_12 = (unsigned char)84;
unsigned char var_13 = (unsigned char)156;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
