#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9736172858076643169ULL;
short var_5 = (short)-153;
unsigned long long int var_10 = 335104060177562353ULL;
int zero = 0;
signed char var_13 = (signed char)-12;
long long int var_14 = 7594820083148092417LL;
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
