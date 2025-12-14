#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11305;
short var_1 = (short)-7571;
short var_2 = (short)-5776;
signed char var_10 = (signed char)67;
unsigned char var_12 = (unsigned char)128;
int zero = 0;
long long int var_15 = -6699580677282988816LL;
unsigned char var_16 = (unsigned char)74;
_Bool var_17 = (_Bool)0;
int var_18 = -1361577002;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
