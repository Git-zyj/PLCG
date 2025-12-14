#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)43711;
long long int var_9 = -5723373365722466532LL;
long long int var_13 = -6172676889115208409LL;
int zero = 0;
unsigned short var_15 = (unsigned short)53675;
signed char var_16 = (signed char)-83;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
