#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 189689944U;
unsigned long long int var_4 = 6015698500941769029ULL;
int zero = 0;
unsigned int var_16 = 1758720794U;
unsigned long long int var_17 = 884728683212689315ULL;
unsigned long long int var_18 = 14695725459307684005ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
