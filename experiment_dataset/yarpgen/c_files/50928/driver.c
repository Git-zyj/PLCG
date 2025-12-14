#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54684;
signed char var_2 = (signed char)1;
signed char var_5 = (signed char)79;
unsigned short var_6 = (unsigned short)63979;
unsigned short var_15 = (unsigned short)7479;
int zero = 0;
unsigned short var_17 = (unsigned short)51525;
int var_18 = -1518945435;
int var_19 = -449343168;
signed char var_20 = (signed char)122;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
