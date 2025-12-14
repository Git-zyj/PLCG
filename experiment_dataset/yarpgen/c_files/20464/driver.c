#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_5 = 439054449;
int var_8 = 1286669845;
unsigned long long int var_12 = 3004429946236110566ULL;
int zero = 0;
unsigned long long int var_13 = 5833566180957752128ULL;
unsigned short var_14 = (unsigned short)31318;
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
