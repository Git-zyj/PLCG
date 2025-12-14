#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned short var_3 = (unsigned short)31564;
unsigned long long int var_8 = 16328131501079357680ULL;
long long int var_11 = 5394417169730263260LL;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_16 = 612308843U;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)45420;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
