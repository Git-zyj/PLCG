#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 11617232082578922217ULL;
unsigned long long int var_7 = 5875143458157678373ULL;
int zero = 0;
unsigned long long int var_14 = 13278996654532391124ULL;
unsigned long long int var_15 = 5854668789629110452ULL;
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
