#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-55;
unsigned char var_6 = (unsigned char)239;
unsigned char var_10 = (unsigned char)204;
int zero = 0;
unsigned char var_11 = (unsigned char)211;
unsigned long long int var_12 = 34550790296651982ULL;
unsigned short var_13 = (unsigned short)5294;
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
