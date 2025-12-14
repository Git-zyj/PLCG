#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3709008383639166279ULL;
unsigned char var_3 = (unsigned char)136;
unsigned char var_9 = (unsigned char)41;
signed char var_10 = (signed char)67;
long long int var_11 = -8087913713535925068LL;
_Bool var_15 = (_Bool)1;
short var_17 = (short)24575;
int zero = 0;
unsigned int var_18 = 3988292110U;
unsigned int var_19 = 4050365199U;
_Bool var_20 = (_Bool)0;
short var_21 = (short)28900;
void init() {
}

void checksum() {
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
