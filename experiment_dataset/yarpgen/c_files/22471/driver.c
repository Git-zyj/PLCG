#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-2758;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 1760693999615572029ULL;
unsigned int var_7 = 1233746691U;
unsigned long long int var_11 = 5389375916263433140ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_16 = 2107382064;
unsigned int var_17 = 2933721011U;
unsigned int var_18 = 3594175047U;
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
