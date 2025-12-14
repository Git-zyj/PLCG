#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)30702;
unsigned int var_7 = 429768896U;
_Bool var_8 = (_Bool)0;
short var_11 = (short)-31683;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_17 = (_Bool)0;
int var_18 = -640257119;
void init() {
}

void checksum() {
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
