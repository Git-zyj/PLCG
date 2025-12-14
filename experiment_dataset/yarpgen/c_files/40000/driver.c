#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 10861017419663907565ULL;
signed char var_5 = (signed char)55;
unsigned int var_6 = 2474099188U;
unsigned int var_9 = 4084333932U;
int zero = 0;
unsigned short var_14 = (unsigned short)53980;
int var_15 = 2127555291;
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
