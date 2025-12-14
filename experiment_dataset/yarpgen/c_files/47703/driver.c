#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13843894361386430302ULL;
signed char var_5 = (signed char)-21;
unsigned short var_7 = (unsigned short)18854;
_Bool var_10 = (_Bool)1;
long long int var_12 = -479393946725529316LL;
unsigned long long int var_13 = 2083069663014212197ULL;
unsigned int var_14 = 3904358360U;
int zero = 0;
_Bool var_18 = (_Bool)1;
unsigned long long int var_19 = 5631644055855912562ULL;
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
