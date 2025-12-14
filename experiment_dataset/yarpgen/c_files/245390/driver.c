#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12153411069468598389ULL;
unsigned long long int var_4 = 7460053790867100697ULL;
unsigned long long int var_7 = 1086448726094605237ULL;
unsigned long long int var_8 = 5971775976916874295ULL;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
