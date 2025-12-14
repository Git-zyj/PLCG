#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)19157;
unsigned long long int var_3 = 9872689873930996600ULL;
long long int var_8 = -3664181076097114683LL;
unsigned short var_12 = (unsigned short)58856;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 6870575318208109948ULL;
unsigned int var_17 = 212430578U;
unsigned long long int var_18 = 8062905055029080575ULL;
long long int var_19 = -4882086176496344480LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
