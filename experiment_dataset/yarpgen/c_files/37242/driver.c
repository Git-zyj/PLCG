#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1576310568;
unsigned int var_3 = 2256126287U;
unsigned int var_8 = 1538099153U;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_13 = -659632864;
unsigned int var_14 = 1704089903U;
long long int var_15 = 1227996536083861787LL;
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
