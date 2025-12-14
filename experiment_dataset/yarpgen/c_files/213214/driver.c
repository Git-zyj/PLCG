#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 202789866;
int var_2 = -686437774;
signed char var_3 = (signed char)-58;
long long int var_4 = 948230605122602900LL;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)189;
short var_9 = (short)11026;
signed char var_10 = (signed char)-74;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 16348762196256083318ULL;
_Bool var_13 = (_Bool)0;
unsigned int var_15 = 247221084U;
_Bool var_16 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 8970097765806553428LL;
short var_21 = (short)2426;
unsigned char var_22 = (unsigned char)214;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
