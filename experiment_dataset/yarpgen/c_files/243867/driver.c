#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_3 = (short)1298;
signed char var_9 = (signed char)(-127 - 1);
int var_11 = -1628558663;
signed char var_12 = (signed char)17;
int zero = 0;
long long int var_17 = 2107346011333175680LL;
unsigned long long int var_18 = 15514501217265999868ULL;
int var_19 = 647115522;
int var_20 = 2103793127;
unsigned char var_21 = (unsigned char)21;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
