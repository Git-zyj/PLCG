#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_9 = (unsigned short)3409;
unsigned char var_12 = (unsigned char)84;
unsigned int var_15 = 3431703380U;
unsigned short var_16 = (unsigned short)15471;
int zero = 0;
signed char var_17 = (signed char)-10;
signed char var_18 = (signed char)-111;
int var_19 = -473297081;
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
