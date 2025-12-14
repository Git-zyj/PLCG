#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)43823;
unsigned int var_5 = 1940953511U;
_Bool var_8 = (_Bool)1;
short var_11 = (short)16809;
int zero = 0;
long long int var_12 = 5244456334000739535LL;
long long int var_13 = -6268807781534724447LL;
int var_14 = 2027869956;
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
