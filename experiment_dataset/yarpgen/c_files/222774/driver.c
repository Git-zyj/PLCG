#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)118;
unsigned long long int var_9 = 11767128981589611337ULL;
unsigned long long int var_10 = 9476055706974842969ULL;
int zero = 0;
unsigned int var_20 = 4158208936U;
int var_21 = 1696762476;
int var_22 = 191519619;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
