#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 4734765340893046535LL;
unsigned char var_8 = (unsigned char)212;
signed char var_10 = (signed char)-90;
int zero = 0;
unsigned char var_12 = (unsigned char)51;
unsigned short var_13 = (unsigned short)2584;
short var_14 = (short)-4201;
void init() {
}

void checksum() {
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
