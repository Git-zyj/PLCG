#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 1111755873U;
unsigned long long int var_5 = 16657120090842761545ULL;
_Bool var_8 = (_Bool)1;
int zero = 0;
short var_10 = (short)20718;
short var_11 = (short)-10832;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
