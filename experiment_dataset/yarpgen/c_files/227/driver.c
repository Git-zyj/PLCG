#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_9 = 8082537396880516939ULL;
int var_12 = 967025400;
unsigned int var_13 = 1538919887U;
int zero = 0;
unsigned long long int var_14 = 10776778890782483800ULL;
short var_15 = (short)23925;
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
