#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_10 = 2425666928293430859ULL;
unsigned int var_11 = 2828564927U;
int zero = 0;
signed char var_14 = (signed char)105;
unsigned char var_15 = (unsigned char)47;
int var_16 = -1055649206;
signed char var_17 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
