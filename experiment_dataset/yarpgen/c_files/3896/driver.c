#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9327130278786827294ULL;
unsigned long long int var_8 = 17991758802526955755ULL;
unsigned long long int var_12 = 923829628031381824ULL;
int zero = 0;
unsigned long long int var_14 = 4260155070082960202ULL;
unsigned long long int var_15 = 6958316707611821240ULL;
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
