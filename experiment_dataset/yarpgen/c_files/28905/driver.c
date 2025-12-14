#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1390229896;
signed char var_3 = (signed char)-46;
unsigned short var_5 = (unsigned short)20028;
_Bool var_9 = (_Bool)1;
int var_11 = 892943865;
int zero = 0;
long long int var_20 = -171662524040099444LL;
signed char var_21 = (signed char)-56;
int var_22 = 720318953;
int var_23 = -439005560;
void init() {
}

void checksum() {
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
