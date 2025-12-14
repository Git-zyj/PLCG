#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
long long int var_10 = -8552366876633518008LL;
int var_13 = -1065727579;
int zero = 0;
unsigned long long int var_18 = 15417684488493322144ULL;
unsigned long long int var_19 = 6039958382236271137ULL;
unsigned long long int var_20 = 6072746587156741510ULL;
signed char var_21 = (signed char)19;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
