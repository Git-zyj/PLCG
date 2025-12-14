#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)47;
unsigned char var_4 = (unsigned char)41;
int var_6 = -49478057;
int var_10 = 51975852;
int zero = 0;
unsigned char var_11 = (unsigned char)58;
unsigned char var_12 = (unsigned char)31;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
