#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
short var_6 = (short)22548;
signed char var_7 = (signed char)79;
int var_8 = 34556042;
unsigned long long int var_10 = 12216576409686269431ULL;
int zero = 0;
unsigned short var_12 = (unsigned short)25316;
unsigned long long int var_13 = 7223907977983621915ULL;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
