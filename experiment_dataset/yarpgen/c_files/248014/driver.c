#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)99;
signed char var_2 = (signed char)41;
unsigned int var_5 = 454401497U;
long long int var_7 = -3132427606807584193LL;
int var_8 = 862060834;
unsigned long long int var_10 = 12549793389465656971ULL;
long long int var_12 = 2868735143509366179LL;
unsigned int var_13 = 3613482375U;
int zero = 0;
unsigned int var_14 = 3299449456U;
unsigned short var_15 = (unsigned short)30416;
unsigned long long int var_16 = 2920962961553599938ULL;
unsigned short var_17 = (unsigned short)13061;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
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
