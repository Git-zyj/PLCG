#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 3167300899525699818ULL;
unsigned long long int var_4 = 13617187563338221531ULL;
_Bool var_7 = (_Bool)1;
_Bool var_11 = (_Bool)1;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned long long int var_16 = 11787412843363869643ULL;
unsigned long long int var_17 = 5097034779772003328ULL;
_Bool var_18 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 484579859773250000ULL;
unsigned long long int var_21 = 14484519164359531210ULL;
_Bool var_22 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
