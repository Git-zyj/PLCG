#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_3 = 15666186718638816084ULL;
signed char var_5 = (signed char)108;
_Bool var_7 = (_Bool)0;
long long int var_10 = 6949602069531373787LL;
unsigned long long int var_12 = 2594485393534376981ULL;
int zero = 0;
long long int var_14 = 4810014684770584631LL;
unsigned short var_15 = (unsigned short)18814;
unsigned long long int var_16 = 17544703552749533748ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
