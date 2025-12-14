#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6457094505005641505LL;
int var_5 = -1881733826;
unsigned long long int var_19 = 13520600497277101212ULL;
int zero = 0;
long long int var_20 = 4481673909425329847LL;
unsigned char var_21 = (unsigned char)39;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
