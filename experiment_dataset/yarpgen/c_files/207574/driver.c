#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_11 = -5581647988812664575LL;
unsigned long long int var_12 = 197067155801850920ULL;
unsigned long long int var_17 = 14215553698684605166ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)23778;
short var_19 = (short)1576;
unsigned long long int var_20 = 14592947463002079778ULL;
void init() {
}

void checksum() {
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
