#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 5094347878433286732LL;
unsigned int var_4 = 416351557U;
_Bool var_15 = (_Bool)0;
unsigned char var_18 = (unsigned char)46;
int zero = 0;
unsigned int var_19 = 1665012344U;
int var_20 = -987508291;
signed char var_21 = (signed char)-73;
long long int var_22 = -8617641291746717809LL;
int var_23 = 2137238079;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
