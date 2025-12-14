#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_4 = (signed char)16;
unsigned short var_7 = (unsigned short)2445;
_Bool var_9 = (_Bool)0;
long long int var_12 = 6743819273130620300LL;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)82;
unsigned long long int var_15 = 6434338420164419544ULL;
signed char var_16 = (signed char)-94;
signed char var_17 = (signed char)-62;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
