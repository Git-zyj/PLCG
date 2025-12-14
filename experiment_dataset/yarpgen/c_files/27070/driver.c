#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1348745034;
unsigned int var_5 = 3661501719U;
unsigned char var_9 = (unsigned char)37;
int zero = 0;
unsigned short var_10 = (unsigned short)14252;
signed char var_11 = (signed char)5;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
