#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_2 = 956697418549758263LL;
unsigned long long int var_3 = 8732352859287584888ULL;
signed char var_5 = (signed char)-31;
int var_9 = 1565472265;
unsigned short var_11 = (unsigned short)10885;
int zero = 0;
int var_19 = -683858728;
int var_20 = 1947472331;
signed char var_21 = (signed char)-97;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
