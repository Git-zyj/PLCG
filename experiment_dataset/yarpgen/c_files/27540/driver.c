#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -568981510394140916LL;
long long int var_1 = 1577453945949160640LL;
unsigned long long int var_2 = 16806465883588836903ULL;
_Bool var_8 = (_Bool)1;
long long int var_10 = -7922817026609450365LL;
int zero = 0;
unsigned int var_12 = 750098245U;
long long int var_13 = 6540681806735641506LL;
short var_14 = (short)10301;
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
