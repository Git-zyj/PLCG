#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned char var_3 = (unsigned char)183;
unsigned long long int var_4 = 1384476463080001950ULL;
signed char var_8 = (signed char)-16;
unsigned int var_10 = 3988168781U;
short var_11 = (short)-28797;
short var_12 = (short)22854;
int var_13 = 137742551;
int zero = 0;
_Bool var_16 = (_Bool)0;
int var_17 = 41579249;
signed char var_18 = (signed char)-14;
signed char var_19 = (signed char)78;
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
