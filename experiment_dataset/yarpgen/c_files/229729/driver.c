#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 933629846;
unsigned int var_2 = 781885351U;
short var_3 = (short)3195;
int var_4 = 2117564612;
int var_5 = -1591713994;
short var_6 = (short)-14066;
_Bool var_7 = (_Bool)1;
int var_8 = -1742269306;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)1;
int zero = 0;
_Bool var_11 = (_Bool)0;
int var_12 = -1189111365;
long long int var_13 = 8419161453757398591LL;
unsigned int var_14 = 927758964U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
