#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
int var_5 = 607683279;
unsigned short var_6 = (unsigned short)40094;
signed char var_9 = (signed char)95;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_17 = 16107503807452983406ULL;
signed char var_18 = (signed char)32;
void init() {
}

void checksum() {
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
