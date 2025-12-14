#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60473;
long long int var_6 = -3170269369830471293LL;
long long int var_17 = 930048205004096254LL;
int zero = 0;
signed char var_19 = (signed char)-35;
signed char var_20 = (signed char)-19;
_Bool var_21 = (_Bool)0;
int var_22 = 1120294254;
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
