#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -295336519;
unsigned long long int var_3 = 9545304007636605944ULL;
int var_4 = 350373004;
unsigned long long int var_5 = 3181841650851048049ULL;
int zero = 0;
int var_10 = -962551046;
_Bool var_11 = (_Bool)1;
short var_12 = (short)22648;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
