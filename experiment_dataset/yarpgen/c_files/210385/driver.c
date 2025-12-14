#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-121;
int var_1 = -110990964;
int var_2 = -1975934923;
unsigned long long int var_3 = 2482614903365820329ULL;
unsigned long long int var_4 = 11423911628545581048ULL;
signed char var_8 = (signed char)-74;
int var_9 = -1700588762;
unsigned int var_10 = 4086608057U;
int zero = 0;
_Bool var_12 = (_Bool)1;
_Bool var_13 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1088839048U;
int var_16 = -1397836100;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
