#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4348515239470232142LL;
unsigned short var_5 = (unsigned short)36728;
signed char var_12 = (signed char)64;
int zero = 0;
long long int var_17 = 2105149405953946145LL;
int var_18 = -1894544440;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
