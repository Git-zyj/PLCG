#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
long long int var_12 = -337210118442515085LL;
unsigned short var_15 = (unsigned short)30226;
int zero = 0;
unsigned short var_16 = (unsigned short)10342;
short var_17 = (short)-3414;
int var_18 = 629697476;
unsigned int var_19 = 3875163855U;
int var_20 = 137277873;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
