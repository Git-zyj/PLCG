#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 5517100391786005310ULL;
unsigned long long int var_6 = 16892066586676376049ULL;
unsigned long long int var_7 = 5665990317560316858ULL;
int zero = 0;
unsigned long long int var_11 = 2430221144409059425ULL;
unsigned long long int var_12 = 15069269568178224232ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
