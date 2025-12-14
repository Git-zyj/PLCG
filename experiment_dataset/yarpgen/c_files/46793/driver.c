#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_5 = -5931958314064567487LL;
_Bool var_8 = (_Bool)1;
unsigned int var_11 = 3992435062U;
unsigned long long int var_12 = 188481671748434442ULL;
_Bool var_16 = (_Bool)0;
unsigned int var_18 = 3774528729U;
int zero = 0;
unsigned char var_19 = (unsigned char)71;
unsigned char var_20 = (unsigned char)198;
long long int var_21 = 6368101202803751636LL;
long long int var_22 = 2054688155962372623LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
