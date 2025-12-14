#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 687770471;
_Bool var_5 = (_Bool)1;
unsigned short var_8 = (unsigned short)29729;
_Bool var_12 = (_Bool)0;
int zero = 0;
int var_13 = -1399084589;
int var_14 = -579249161;
void init() {
}

void checksum() {
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
