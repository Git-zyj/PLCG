#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)38;
signed char var_10 = (signed char)-6;
int zero = 0;
unsigned char var_19 = (unsigned char)138;
unsigned int var_20 = 2804211094U;
signed char var_21 = (signed char)93;
unsigned char var_22 = (unsigned char)30;
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
