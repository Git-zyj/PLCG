#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)32226;
_Bool var_3 = (_Bool)0;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 3538076035U;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 1488620826U;
unsigned long long int var_16 = 4587075889011916087ULL;
long long int var_17 = -4904239168619770029LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
