#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 456126793U;
int var_1 = -1253515550;
int var_2 = -1653148535;
_Bool var_6 = (_Bool)1;
int var_9 = -1759333550;
unsigned int var_10 = 3638889809U;
_Bool var_12 = (_Bool)0;
long long int var_13 = 2224652078570567128LL;
int var_17 = 1779479784;
int zero = 0;
unsigned int var_19 = 4131880177U;
int var_20 = 1790149714;
int var_21 = 525065932;
void init() {
}

void checksum() {
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
