#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)1;
long long int var_4 = 1703821284635656749LL;
int var_6 = -956940911;
signed char var_8 = (signed char)-126;
unsigned int var_9 = 949824071U;
short var_11 = (short)9666;
unsigned short var_13 = (unsigned short)45040;
int zero = 0;
unsigned int var_14 = 3068398801U;
unsigned short var_15 = (unsigned short)10077;
unsigned int var_16 = 229479407U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
