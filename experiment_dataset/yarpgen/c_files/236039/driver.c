#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)104;
unsigned char var_3 = (unsigned char)230;
unsigned char var_6 = (unsigned char)223;
unsigned char var_8 = (unsigned char)123;
int zero = 0;
int var_13 = 2083075638;
unsigned char var_14 = (unsigned char)168;
unsigned char var_15 = (unsigned char)207;
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
