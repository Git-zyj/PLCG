#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2478606145U;
int var_9 = -2121787980;
unsigned short var_16 = (unsigned short)19061;
int zero = 0;
unsigned char var_17 = (unsigned char)207;
unsigned char var_18 = (unsigned char)163;
int var_19 = -510146135;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
