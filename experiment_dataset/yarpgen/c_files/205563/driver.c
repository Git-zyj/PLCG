#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 4195793603694199096ULL;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int var_12 = -763503055;
int zero = 0;
unsigned int var_13 = 1050542787U;
unsigned long long int var_14 = 11670135567042906109ULL;
void init() {
}

void checksum() {
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
