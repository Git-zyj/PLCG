#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2306115314U;
unsigned char var_6 = (unsigned char)81;
unsigned char var_7 = (unsigned char)133;
unsigned short var_10 = (unsigned short)52697;
int zero = 0;
int var_14 = -1697535540;
unsigned char var_15 = (unsigned char)47;
unsigned long long int var_16 = 13077954387804981647ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
