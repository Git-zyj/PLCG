#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
long long int var_4 = -2713943182632597104LL;
long long int var_6 = -6793313725106148035LL;
int var_8 = 340987245;
signed char var_12 = (signed char)-20;
int zero = 0;
_Bool var_13 = (_Bool)1;
int var_14 = 816169576;
signed char var_15 = (signed char)-112;
void init() {
}

void checksum() {
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
