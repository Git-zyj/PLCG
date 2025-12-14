#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)34;
signed char var_13 = (signed char)-116;
int var_15 = 1304280112;
signed char var_16 = (signed char)57;
int zero = 0;
unsigned char var_19 = (unsigned char)193;
unsigned char var_20 = (unsigned char)75;
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
