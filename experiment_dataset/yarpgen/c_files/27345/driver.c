#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6702644071856035309LL;
int var_7 = -269711686;
unsigned int var_11 = 3549202435U;
unsigned int var_12 = 2942005146U;
unsigned int var_14 = 3520996812U;
int zero = 0;
short var_15 = (short)-5024;
int var_16 = -926798037;
long long int var_17 = 3930814372969986777LL;
int var_18 = 1695518449;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
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
