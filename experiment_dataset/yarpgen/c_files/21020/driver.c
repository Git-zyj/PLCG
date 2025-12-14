#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-28272;
unsigned long long int var_9 = 12658840412586086324ULL;
long long int var_14 = 2603623131829351451LL;
int zero = 0;
long long int var_19 = -1960120282381842650LL;
unsigned char var_20 = (unsigned char)86;
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
