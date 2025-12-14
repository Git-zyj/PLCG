#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13198367004291140236ULL;
unsigned long long int var_4 = 10077202078984298217ULL;
unsigned char var_5 = (unsigned char)179;
int zero = 0;
int var_10 = 1447897209;
short var_11 = (short)-17368;
signed char var_12 = (signed char)122;
int var_13 = -1397398042;
unsigned long long int var_14 = 15824292647802253750ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
