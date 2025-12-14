#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 13307153948023345799ULL;
unsigned long long int var_6 = 11243109527225690114ULL;
unsigned long long int var_8 = 8309844447822987246ULL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_11 = 18294688098471160669ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned long long int var_14 = 11776902390673223973ULL;
long long int var_15 = -7307321257016917245LL;
unsigned int var_16 = 1603385663U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
