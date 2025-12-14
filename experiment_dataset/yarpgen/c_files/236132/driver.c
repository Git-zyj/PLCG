#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 16834785776698947259ULL;
_Bool var_8 = (_Bool)1;
unsigned long long int var_9 = 9606164077279258871ULL;
int var_10 = 1687336308;
int zero = 0;
_Bool var_12 = (_Bool)1;
int var_13 = -1614809969;
int var_14 = 590064363;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
