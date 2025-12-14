#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2645258856U;
signed char var_2 = (signed char)-80;
signed char var_3 = (signed char)67;
_Bool var_7 = (_Bool)0;
_Bool var_9 = (_Bool)0;
long long int var_10 = 3913271470103886689LL;
unsigned int var_12 = 4286028863U;
unsigned int var_15 = 1430149189U;
unsigned int var_16 = 3650159868U;
int zero = 0;
unsigned int var_18 = 3244679716U;
signed char var_19 = (signed char)-77;
long long int var_20 = -306503445121803103LL;
unsigned int var_21 = 175088414U;
void init() {
}

void checksum() {
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
