#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 166945949;
unsigned int var_3 = 709677147U;
unsigned long long int var_5 = 6025021355153548954ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)196;
unsigned int var_11 = 3675762493U;
signed char var_12 = (signed char)-34;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
