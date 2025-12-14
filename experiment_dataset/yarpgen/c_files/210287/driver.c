#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)123;
unsigned char var_1 = (unsigned char)170;
unsigned char var_3 = (unsigned char)14;
unsigned char var_4 = (unsigned char)93;
unsigned char var_5 = (unsigned char)174;
unsigned char var_6 = (unsigned char)69;
unsigned char var_7 = (unsigned char)188;
unsigned char var_8 = (unsigned char)100;
unsigned char var_9 = (unsigned char)22;
int zero = 0;
unsigned char var_10 = (unsigned char)129;
unsigned char var_11 = (unsigned char)147;
unsigned char var_12 = (unsigned char)128;
unsigned char var_13 = (unsigned char)251;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
