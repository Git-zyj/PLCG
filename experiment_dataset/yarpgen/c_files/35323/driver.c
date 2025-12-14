#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-43;
long long int var_1 = 6888118177383240869LL;
short var_3 = (short)-647;
unsigned int var_5 = 4163412885U;
_Bool var_6 = (_Bool)1;
unsigned int var_11 = 2525887337U;
unsigned int var_14 = 31877130U;
int zero = 0;
short var_16 = (short)25176;
unsigned int var_17 = 1671121902U;
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
