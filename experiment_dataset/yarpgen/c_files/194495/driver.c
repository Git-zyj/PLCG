#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1208826849;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 15545085377538890351ULL;
short var_10 = (short)31578;
int zero = 0;
unsigned int var_14 = 1920739509U;
unsigned int var_15 = 480569297U;
unsigned int var_16 = 3969192742U;
int var_17 = 2065629477;
void init() {
}

void checksum() {
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
