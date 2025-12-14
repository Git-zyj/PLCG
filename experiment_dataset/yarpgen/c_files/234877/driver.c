#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30276;
unsigned long long int var_2 = 1398046847613332795ULL;
short var_3 = (short)-18257;
short var_7 = (short)-17645;
signed char var_10 = (signed char)-16;
int zero = 0;
short var_13 = (short)24683;
_Bool var_14 = (_Bool)1;
int var_15 = -1285582798;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
