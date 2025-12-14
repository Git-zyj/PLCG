#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_6 = 2318985156U;
unsigned short var_8 = (unsigned short)51209;
signed char var_9 = (signed char)-84;
int var_12 = 1471062968;
int zero = 0;
unsigned long long int var_15 = 14135528696919724164ULL;
int var_16 = -478089616;
void init() {
}

void checksum() {
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
