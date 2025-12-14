#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
_Bool var_2 = (_Bool)0;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned int var_8 = 3980470301U;
short var_9 = (short)7008;
unsigned long long int var_10 = 9276350597790519044ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
short var_19 = (short)3485;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
