#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2510569004U;
unsigned long long int var_4 = 17203826658844910063ULL;
unsigned int var_9 = 780383194U;
unsigned char var_11 = (unsigned char)76;
int zero = 0;
unsigned int var_13 = 2934378113U;
unsigned short var_14 = (unsigned short)56633;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
