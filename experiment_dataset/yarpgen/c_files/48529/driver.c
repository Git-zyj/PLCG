#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)26834;
short var_10 = (short)25210;
long long int var_14 = -2504860284569021805LL;
unsigned long long int var_16 = 5686780745254953596ULL;
int zero = 0;
unsigned short var_19 = (unsigned short)994;
signed char var_20 = (signed char)88;
unsigned int var_21 = 434601449U;
long long int var_22 = 947403279238504555LL;
_Bool var_23 = (_Bool)0;
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
