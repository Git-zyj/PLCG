#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 343228616U;
short var_2 = (short)-28897;
short var_3 = (short)20717;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-25091;
unsigned long long int var_12 = 16019938106811874102ULL;
unsigned int var_13 = 1354758079U;
_Bool var_16 = (_Bool)0;
int zero = 0;
_Bool var_19 = (_Bool)1;
short var_20 = (short)23242;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
