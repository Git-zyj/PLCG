#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1983622509U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_7 = 7486144631748611668ULL;
_Bool var_8 = (_Bool)1;
unsigned int var_9 = 3149536154U;
unsigned long long int var_11 = 13826349897280240570ULL;
int zero = 0;
unsigned int var_12 = 335757863U;
unsigned long long int var_13 = 10542163877964824678ULL;
unsigned int var_14 = 2327703230U;
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
