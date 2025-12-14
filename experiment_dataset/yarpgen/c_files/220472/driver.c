#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -5725446219293542252LL;
signed char var_9 = (signed char)107;
unsigned char var_10 = (unsigned char)235;
int zero = 0;
unsigned int var_11 = 2584999248U;
unsigned int var_12 = 464291800U;
void init() {
}

void checksum() {
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
