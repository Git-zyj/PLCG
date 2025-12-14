#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)215;
long long int var_6 = -4852263320296036983LL;
unsigned int var_8 = 3140240181U;
unsigned short var_18 = (unsigned short)9191;
int zero = 0;
long long int var_19 = 2922151542255070401LL;
unsigned char var_20 = (unsigned char)165;
void init() {
}

void checksum() {
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
