#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)244;
unsigned int var_1 = 2018768360U;
unsigned int var_2 = 3468507580U;
unsigned int var_8 = 434913805U;
unsigned int var_9 = 1768432897U;
unsigned int var_11 = 1847080453U;
int zero = 0;
_Bool var_13 = (_Bool)0;
int var_14 = 1267543321;
short var_15 = (short)-5985;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
