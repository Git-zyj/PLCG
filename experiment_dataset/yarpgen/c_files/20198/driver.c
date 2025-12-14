#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)1;
short var_8 = (short)19249;
unsigned long long int var_15 = 18044924531032270564ULL;
int zero = 0;
unsigned long long int var_17 = 2897683645837209668ULL;
unsigned short var_18 = (unsigned short)32744;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 8458197389433238134ULL;
unsigned short var_21 = (unsigned short)39188;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
