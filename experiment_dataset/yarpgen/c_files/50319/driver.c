#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2005951911U;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 1843964023U;
unsigned int var_4 = 2525414641U;
_Bool var_5 = (_Bool)1;
short var_6 = (short)26833;
unsigned int var_9 = 344659338U;
signed char var_10 = (signed char)-70;
_Bool var_12 = (_Bool)1;
unsigned long long int var_13 = 3247085872528186416ULL;
int var_14 = 101896032;
int zero = 0;
unsigned int var_15 = 3703600307U;
signed char var_16 = (signed char)-88;
unsigned long long int var_17 = 11990731970337456063ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
