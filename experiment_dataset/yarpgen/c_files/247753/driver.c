#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)89;
short var_7 = (short)29658;
int var_14 = -840173263;
int zero = 0;
unsigned int var_18 = 2757156130U;
long long int var_19 = 8346004997731176258LL;
long long int var_20 = 1266112563847913728LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
