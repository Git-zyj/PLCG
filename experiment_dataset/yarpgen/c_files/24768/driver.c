#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = 1047667176;
signed char var_8 = (signed char)-59;
unsigned long long int var_9 = 13759953014482371123ULL;
int zero = 0;
unsigned long long int var_12 = 10136359947869767924ULL;
unsigned char var_13 = (unsigned char)62;
void init() {
}

void checksum() {
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
