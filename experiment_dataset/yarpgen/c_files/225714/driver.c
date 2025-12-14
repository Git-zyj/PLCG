#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)21714;
_Bool var_3 = (_Bool)0;
unsigned int var_5 = 2611808704U;
int var_7 = 1153938347;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_17 = (short)17843;
long long int var_18 = 8764352101435232620LL;
int var_19 = -782598118;
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
