#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)113;
unsigned char var_7 = (unsigned char)82;
int var_9 = -951999746;
int zero = 0;
long long int var_10 = 4552029500564089336LL;
long long int var_11 = 2584188557029018231LL;
unsigned int var_12 = 1638874204U;
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
