#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6475615009578847579LL;
int var_4 = 1596955243;
short var_7 = (short)4994;
unsigned short var_14 = (unsigned short)32993;
int zero = 0;
int var_17 = -2139909503;
long long int var_18 = -5495302128482511843LL;
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
