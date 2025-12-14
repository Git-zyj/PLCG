#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 15846025619179235430ULL;
signed char var_4 = (signed char)108;
unsigned short var_13 = (unsigned short)14192;
int zero = 0;
unsigned long long int var_19 = 11664395881433982533ULL;
long long int var_20 = 5151073252034941335LL;
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
