#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-50;
long long int var_2 = -5072766865671441427LL;
short var_6 = (short)20479;
short var_7 = (short)705;
signed char var_13 = (signed char)-79;
int zero = 0;
signed char var_14 = (signed char)31;
short var_15 = (short)1458;
unsigned int var_16 = 1091036458U;
unsigned long long int var_17 = 13849883483439743365ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
