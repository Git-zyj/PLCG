#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28318;
unsigned short var_3 = (unsigned short)14602;
_Bool var_8 = (_Bool)0;
long long int var_9 = -36651502123426031LL;
int var_13 = -1925715081;
short var_14 = (short)2726;
int zero = 0;
signed char var_15 = (signed char)99;
signed char var_16 = (signed char)126;
unsigned int var_17 = 146551006U;
short var_18 = (short)10430;
unsigned short var_19 = (unsigned short)14013;
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
