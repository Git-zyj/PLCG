#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)104;
unsigned char var_7 = (unsigned char)47;
unsigned char var_10 = (unsigned char)84;
int zero = 0;
unsigned char var_17 = (unsigned char)26;
unsigned char var_18 = (unsigned char)247;
unsigned char var_19 = (unsigned char)70;
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
