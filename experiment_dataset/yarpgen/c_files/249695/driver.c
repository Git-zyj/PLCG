#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)23784;
short var_1 = (short)1962;
unsigned long long int var_2 = 11125815299331346969ULL;
signed char var_7 = (signed char)37;
_Bool var_8 = (_Bool)1;
short var_9 = (short)10051;
int zero = 0;
short var_16 = (short)15841;
short var_17 = (short)-28159;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
