#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2337467656871141220LL;
unsigned char var_4 = (unsigned char)50;
signed char var_7 = (signed char)65;
int zero = 0;
unsigned int var_11 = 3958884399U;
signed char var_12 = (signed char)-94;
unsigned short var_13 = (unsigned short)5653;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
