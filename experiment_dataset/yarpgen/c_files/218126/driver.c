#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11072;
short var_2 = (short)9083;
_Bool var_4 = (_Bool)0;
int var_5 = -1197558330;
unsigned long long int var_9 = 3973706046071535419ULL;
unsigned int var_10 = 2664225436U;
int var_11 = -1582539170;
unsigned long long int var_12 = 10645342685223832584ULL;
signed char var_13 = (signed char)-69;
int var_14 = 767072486;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned long long int var_16 = 11370987724881533153ULL;
signed char var_17 = (signed char)-80;
unsigned int var_18 = 4002125162U;
unsigned long long int var_19 = 5917789907857428572ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
