#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
int var_3 = 388202055;
int var_4 = 1709847355;
long long int var_5 = 3580603662344586575LL;
long long int var_6 = -3293485519980560921LL;
int var_10 = -786787029;
int zero = 0;
long long int var_11 = -2321715360655134234LL;
_Bool var_12 = (_Bool)1;
long long int var_13 = 1477795205309592318LL;
int var_14 = 88102798;
int var_15 = -334178344;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
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
