#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14177592794627544440ULL;
unsigned char var_5 = (unsigned char)19;
signed char var_8 = (signed char)80;
signed char var_9 = (signed char)-109;
signed char var_12 = (signed char)-43;
int zero = 0;
signed char var_18 = (signed char)-38;
unsigned long long int var_19 = 13299562837325505483ULL;
void init() {
}

void checksum() {
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
