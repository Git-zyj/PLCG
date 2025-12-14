#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7426507964659824246LL;
unsigned int var_6 = 170053631U;
int var_8 = 1913128509;
signed char var_9 = (signed char)63;
int zero = 0;
unsigned char var_10 = (unsigned char)165;
signed char var_11 = (signed char)45;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
