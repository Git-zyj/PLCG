#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_5 = (short)13620;
unsigned int var_8 = 246718330U;
unsigned int var_10 = 715649805U;
int zero = 0;
short var_17 = (short)-23540;
unsigned long long int var_18 = 5453112643784343035ULL;
short var_19 = (short)-26489;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
