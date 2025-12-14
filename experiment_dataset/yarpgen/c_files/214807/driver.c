#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned long long int var_4 = 2732782805638061151ULL;
unsigned short var_9 = (unsigned short)21931;
int var_10 = -2012988173;
signed char var_13 = (signed char)18;
signed char var_14 = (signed char)49;
int var_16 = 1494166182;
int zero = 0;
int var_17 = 190141263;
long long int var_18 = 8537629135037453610LL;
void init() {
}

void checksum() {
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
