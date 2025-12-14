#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5391515129101819555ULL;
unsigned long long int var_4 = 16861667167576506522ULL;
unsigned long long int var_9 = 4965401431824052226ULL;
unsigned long long int var_10 = 2331212322320305044ULL;
int zero = 0;
unsigned long long int var_11 = 2301556023920718073ULL;
unsigned long long int var_12 = 7186345436457294725ULL;
unsigned long long int var_13 = 16877696646812924251ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
