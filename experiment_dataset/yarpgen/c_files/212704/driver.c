#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned int var_2 = 1474268761U;
long long int var_3 = -1706353586269078078LL;
unsigned int var_4 = 3522987360U;
unsigned int var_5 = 1011716660U;
signed char var_6 = (signed char)57;
int var_8 = -1398479057;
short var_10 = (short)24983;
unsigned int var_11 = 2918752928U;
short var_12 = (short)2081;
unsigned short var_13 = (unsigned short)47077;
unsigned int var_14 = 3608553484U;
int zero = 0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)12989;
unsigned int var_17 = 4210634440U;
unsigned int var_18 = 664357751U;
void init() {
}

void checksum() {
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
