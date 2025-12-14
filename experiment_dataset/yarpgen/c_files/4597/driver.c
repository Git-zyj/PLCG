#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 7394062013319525435ULL;
unsigned short var_4 = (unsigned short)45651;
_Bool var_11 = (_Bool)1;
short var_14 = (short)3954;
int zero = 0;
long long int var_15 = -8902995642057858845LL;
int var_16 = 551169462;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
