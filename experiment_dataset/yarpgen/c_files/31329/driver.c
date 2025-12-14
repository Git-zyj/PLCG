#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2717397603918656428LL;
_Bool var_3 = (_Bool)0;
_Bool var_6 = (_Bool)0;
int zero = 0;
int var_17 = 430087964;
int var_18 = 974410595;
int var_19 = -931110100;
void init() {
}

void checksum() {
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
