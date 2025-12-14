#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10850761182719032574ULL;
unsigned char var_5 = (unsigned char)51;
unsigned int var_10 = 2129625902U;
unsigned int var_16 = 1996483333U;
int zero = 0;
unsigned char var_17 = (unsigned char)23;
long long int var_18 = 6977321214547715990LL;
unsigned int var_19 = 747461551U;
unsigned int var_20 = 913264859U;
unsigned long long int var_21 = 9245912885062513470ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
