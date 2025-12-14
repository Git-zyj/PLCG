#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)0;
int var_5 = 604305372;
_Bool var_10 = (_Bool)1;
int var_11 = -429747333;
unsigned long long int var_16 = 1801477135992571981ULL;
unsigned long long int var_17 = 11161479369449553430ULL;
int zero = 0;
short var_20 = (short)-18549;
unsigned long long int var_21 = 15775204325590277315ULL;
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
