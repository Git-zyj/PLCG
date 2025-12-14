#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1899196973;
unsigned char var_4 = (unsigned char)152;
signed char var_5 = (signed char)-13;
signed char var_8 = (signed char)93;
unsigned long long int var_10 = 8890027167112184144ULL;
int zero = 0;
_Bool var_11 = (_Bool)1;
long long int var_12 = -4206681026952453949LL;
unsigned long long int var_13 = 1091141976185935158ULL;
long long int var_14 = 5387259224879844531LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
