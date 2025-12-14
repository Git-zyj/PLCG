#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6809966289801473214ULL;
long long int var_5 = 7589682910935040843LL;
int zero = 0;
unsigned int var_13 = 3337582378U;
long long int var_14 = 267428400737778263LL;
signed char var_15 = (signed char)-38;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
