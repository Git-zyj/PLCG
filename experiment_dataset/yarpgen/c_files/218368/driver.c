#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_2 = 985921894752349739ULL;
unsigned long long int var_3 = 10496320818235340521ULL;
signed char var_5 = (signed char)-97;
unsigned int var_6 = 3539878341U;
unsigned int var_9 = 188792579U;
_Bool var_10 = (_Bool)1;
signed char var_13 = (signed char)-62;
int zero = 0;
unsigned long long int var_14 = 8640901344667985807ULL;
unsigned int var_15 = 2738376919U;
unsigned int var_16 = 3033056155U;
unsigned int var_17 = 3102033114U;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
