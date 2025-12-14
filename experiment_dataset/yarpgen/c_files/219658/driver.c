#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)125;
unsigned int var_2 = 2409034742U;
short var_3 = (short)-29728;
int var_5 = 306426023;
unsigned char var_6 = (unsigned char)188;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 15706230801810764872ULL;
unsigned int var_16 = 2428846790U;
short var_17 = (short)10649;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
