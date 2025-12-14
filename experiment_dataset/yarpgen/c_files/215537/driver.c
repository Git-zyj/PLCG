#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4156726670U;
long long int var_2 = -4518355483843526940LL;
int var_3 = 1340464680;
unsigned long long int var_4 = 9182390230141807551ULL;
unsigned int var_5 = 3888058585U;
short var_10 = (short)-6907;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -96303533;
unsigned int var_14 = 2307176109U;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
