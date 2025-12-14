#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2577300816U;
short var_2 = (short)4622;
int var_3 = -1198250200;
_Bool var_4 = (_Bool)0;
long long int var_5 = -3393677578650030894LL;
int var_6 = -557274588;
int var_7 = -1988894064;
unsigned short var_9 = (unsigned short)49768;
int var_10 = 159440782;
_Bool var_12 = (_Bool)0;
int zero = 0;
short var_13 = (short)26062;
_Bool var_14 = (_Bool)0;
unsigned long long int var_15 = 476911542143910946ULL;
short var_16 = (short)-485;
short var_17 = (short)31758;
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
