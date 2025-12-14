#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-14906;
short var_2 = (short)-32432;
short var_7 = (short)-13251;
signed char var_9 = (signed char)-9;
short var_12 = (short)-3821;
short var_14 = (short)28087;
short var_16 = (short)-9105;
int zero = 0;
signed char var_17 = (signed char)93;
signed char var_18 = (signed char)37;
short var_19 = (short)10826;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
