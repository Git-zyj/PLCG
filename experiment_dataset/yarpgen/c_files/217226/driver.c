#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -3426731;
int var_4 = -2092099621;
short var_6 = (short)1323;
int var_7 = -1073141385;
_Bool var_8 = (_Bool)0;
signed char var_9 = (signed char)-69;
_Bool var_10 = (_Bool)0;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 3045357559U;
short var_15 = (short)-26125;
short var_16 = (short)31752;
unsigned int var_17 = 898521072U;
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
