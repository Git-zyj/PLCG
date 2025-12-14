#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1899596831085048826LL;
signed char var_4 = (signed char)-70;
long long int var_9 = 7168134740192350685LL;
int zero = 0;
unsigned char var_13 = (unsigned char)20;
long long int var_14 = 3576952634952670223LL;
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
