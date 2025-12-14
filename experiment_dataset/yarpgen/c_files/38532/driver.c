#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3913212169U;
unsigned char var_5 = (unsigned char)224;
unsigned short var_13 = (unsigned short)15163;
int zero = 0;
unsigned char var_19 = (unsigned char)242;
unsigned char var_20 = (unsigned char)14;
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
