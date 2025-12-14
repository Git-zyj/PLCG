#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 4070303183149680943LL;
unsigned int var_8 = 2590150804U;
int var_10 = -1133012863;
int var_13 = -745728224;
int zero = 0;
signed char var_20 = (signed char)-94;
_Bool var_21 = (_Bool)0;
int var_22 = -598503604;
long long int var_23 = 7646775256823486014LL;
void init() {
}

void checksum() {
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
