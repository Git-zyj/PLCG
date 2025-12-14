#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -425786400;
int var_7 = 772464227;
unsigned short var_9 = (unsigned short)34056;
unsigned long long int var_10 = 8099667515315783614ULL;
int zero = 0;
int var_11 = 1492203616;
int var_12 = -1062237942;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
