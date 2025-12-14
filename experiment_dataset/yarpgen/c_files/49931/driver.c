#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-11;
int var_2 = 90521233;
long long int var_3 = 6793777182396266959LL;
unsigned short var_4 = (unsigned short)24531;
unsigned int var_8 = 258447889U;
unsigned long long int var_11 = 13374181908539261939ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = -1089698617;
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
