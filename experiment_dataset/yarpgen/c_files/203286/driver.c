#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)122;
long long int var_2 = -5934599732629710841LL;
int var_3 = 173253120;
unsigned int var_4 = 1295732042U;
signed char var_5 = (signed char)52;
short var_6 = (short)10176;
long long int var_7 = -1865334871580440815LL;
signed char var_8 = (signed char)65;
int zero = 0;
signed char var_10 = (signed char)-39;
signed char var_11 = (signed char)-62;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
