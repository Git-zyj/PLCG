#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6111992141442224426LL;
unsigned int var_3 = 1270173451U;
signed char var_4 = (signed char)90;
short var_5 = (short)-20863;
signed char var_10 = (signed char)-18;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)-121;
int zero = 0;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
long long int var_17 = -2525216841648019752LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
