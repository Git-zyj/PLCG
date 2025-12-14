#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3036019743683469762LL;
unsigned int var_1 = 1611453159U;
signed char var_6 = (signed char)-86;
int zero = 0;
unsigned int var_18 = 3299918027U;
long long int var_19 = -2118763579131602335LL;
void init() {
}

void checksum() {
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
