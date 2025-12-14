#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 14726615889670690842ULL;
_Bool var_7 = (_Bool)1;
unsigned long long int var_11 = 14977017899418381844ULL;
int zero = 0;
unsigned long long int var_20 = 9853810964792708047ULL;
unsigned long long int var_21 = 2556944577380365011ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
