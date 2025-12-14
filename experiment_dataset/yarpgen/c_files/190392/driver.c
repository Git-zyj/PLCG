#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4286084657U;
unsigned int var_3 = 1017253978U;
_Bool var_5 = (_Bool)1;
_Bool var_8 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 4237833371U;
short var_15 = (short)-5596;
_Bool var_16 = (_Bool)1;
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
