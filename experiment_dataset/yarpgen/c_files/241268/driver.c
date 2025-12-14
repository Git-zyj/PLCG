#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_5 = 3172618987U;
int var_6 = -920942286;
long long int var_11 = 7286519952917815339LL;
short var_14 = (short)-6676;
int zero = 0;
unsigned char var_15 = (unsigned char)237;
unsigned short var_16 = (unsigned short)38984;
void init() {
}

void checksum() {
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
