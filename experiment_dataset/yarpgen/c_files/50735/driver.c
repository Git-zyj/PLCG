#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_7 = 344379220U;
short var_14 = (short)7620;
int zero = 0;
short var_16 = (short)22094;
short var_17 = (short)-25431;
unsigned long long int var_18 = 6771223463930467689ULL;
long long int var_19 = -1634542105064515632LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
