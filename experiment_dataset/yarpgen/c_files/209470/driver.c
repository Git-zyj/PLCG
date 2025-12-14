#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 7777636457969499023ULL;
unsigned long long int var_5 = 376207185493966224ULL;
_Bool var_6 = (_Bool)0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 12994943983281440576ULL;
int zero = 0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 4352379377146464565ULL;
_Bool var_19 = (_Bool)0;
int var_20 = -1935368869;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
