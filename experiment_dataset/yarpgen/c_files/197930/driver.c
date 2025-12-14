#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)47842;
int var_9 = -939880219;
short var_10 = (short)-14939;
unsigned int var_12 = 1788585344U;
int zero = 0;
unsigned char var_19 = (unsigned char)110;
signed char var_20 = (signed char)36;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
