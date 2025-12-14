#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)18470;
long long int var_4 = -3136226089335041284LL;
unsigned long long int var_9 = 1770121738906529069ULL;
unsigned long long int var_15 = 5582291154829945661ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 191157578U;
unsigned int var_20 = 3757674844U;
unsigned long long int var_21 = 11072729627039064383ULL;
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
