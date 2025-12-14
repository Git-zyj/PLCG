#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3505871296392135750ULL;
signed char var_4 = (signed char)127;
signed char var_5 = (signed char)61;
unsigned long long int var_7 = 10160964056333634601ULL;
short var_8 = (short)14880;
signed char var_9 = (signed char)24;
unsigned char var_11 = (unsigned char)71;
int var_12 = 377336005;
int zero = 0;
unsigned char var_14 = (unsigned char)56;
short var_15 = (short)12319;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
