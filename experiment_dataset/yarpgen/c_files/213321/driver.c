#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1542485794U;
int var_3 = -2091849127;
unsigned short var_5 = (unsigned short)25859;
unsigned int var_7 = 674214482U;
unsigned long long int var_8 = 12768705420125559639ULL;
int zero = 0;
unsigned int var_11 = 2563523127U;
long long int var_12 = -8865135747150879335LL;
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
