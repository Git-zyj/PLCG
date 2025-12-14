#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 531813130;
unsigned int var_3 = 2253784087U;
long long int var_4 = 5906766581265185962LL;
long long int var_16 = 2286433084213325760LL;
int zero = 0;
unsigned long long int var_19 = 2504938870268793817ULL;
unsigned long long int var_20 = 7648537480871252093ULL;
long long int var_21 = -2943825643851623749LL;
int var_22 = -971425992;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
