#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -6606590775239813108LL;
unsigned char var_5 = (unsigned char)81;
int var_6 = -1199509661;
unsigned char var_7 = (unsigned char)189;
int var_8 = -911877780;
int zero = 0;
int var_13 = -1676186020;
unsigned char var_14 = (unsigned char)78;
unsigned char var_15 = (unsigned char)196;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
