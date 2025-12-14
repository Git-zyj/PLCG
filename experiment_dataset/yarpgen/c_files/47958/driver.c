#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)239;
unsigned char var_1 = (unsigned char)13;
unsigned char var_7 = (unsigned char)119;
unsigned char var_10 = (unsigned char)239;
unsigned char var_11 = (unsigned char)130;
unsigned char var_12 = (unsigned char)251;
unsigned char var_13 = (unsigned char)214;
unsigned char var_14 = (unsigned char)206;
unsigned char var_15 = (unsigned char)159;
int zero = 0;
unsigned char var_19 = (unsigned char)122;
unsigned char var_20 = (unsigned char)223;
unsigned char var_21 = (unsigned char)215;
unsigned char var_22 = (unsigned char)221;
void init() {
}

void checksum() {
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
