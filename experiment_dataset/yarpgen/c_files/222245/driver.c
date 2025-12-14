#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
signed char var_5 = (signed char)-39;
signed char var_6 = (signed char)-70;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
long long int var_9 = 4363065434626283813LL;
short var_12 = (short)-6111;
int zero = 0;
int var_13 = -1927007711;
unsigned int var_14 = 1936265353U;
signed char var_15 = (signed char)23;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
