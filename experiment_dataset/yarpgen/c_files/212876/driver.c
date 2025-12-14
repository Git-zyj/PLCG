#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2432893207U;
int var_5 = -1983963210;
_Bool var_10 = (_Bool)1;
int zero = 0;
unsigned int var_14 = 2330213275U;
unsigned short var_15 = (unsigned short)24349;
void init() {
}

void checksum() {
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
