#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 2065916653018439090LL;
_Bool var_4 = (_Bool)1;
_Bool var_6 = (_Bool)1;
unsigned long long int var_12 = 5344607369733441132ULL;
int zero = 0;
unsigned long long int var_17 = 9667080568933460577ULL;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 1230158483U;
short var_20 = (short)13554;
_Bool var_21 = (_Bool)0;
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
