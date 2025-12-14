#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_3 = 5038470144795241458LL;
unsigned int var_4 = 3547407277U;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)1;
short var_10 = (short)-14679;
unsigned int var_11 = 3369971U;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 3857954458U;
_Bool var_15 = (_Bool)1;
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
