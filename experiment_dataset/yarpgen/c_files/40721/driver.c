#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-63;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 1763229572U;
short var_13 = (short)-26056;
int zero = 0;
unsigned int var_15 = 970812185U;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)-18;
short var_18 = (short)1522;
unsigned int var_19 = 1223801625U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
