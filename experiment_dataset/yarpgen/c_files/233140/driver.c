#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -559614621;
int var_4 = 1680408799;
long long int var_8 = 7637237251864481785LL;
int zero = 0;
signed char var_12 = (signed char)-11;
unsigned long long int var_13 = 18058277743535518979ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
