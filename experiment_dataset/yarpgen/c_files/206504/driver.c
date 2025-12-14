#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned long long int var_2 = 5648348420270002581ULL;
unsigned long long int var_3 = 17662201220224226693ULL;
_Bool var_4 = (_Bool)0;
int var_5 = 547787495;
short var_7 = (short)-3149;
int var_8 = 2017320381;
unsigned short var_10 = (unsigned short)64574;
int zero = 0;
short var_11 = (short)794;
unsigned long long int var_12 = 16724237894122164915ULL;
unsigned int var_13 = 2174567122U;
signed char var_14 = (signed char)114;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
