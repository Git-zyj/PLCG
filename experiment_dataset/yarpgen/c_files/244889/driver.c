#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)92;
_Bool var_1 = (_Bool)0;
int var_2 = 1507025957;
unsigned int var_4 = 3043726383U;
unsigned char var_5 = (unsigned char)86;
unsigned char var_7 = (unsigned char)193;
_Bool var_8 = (_Bool)0;
short var_9 = (short)-8015;
unsigned int var_10 = 2882887983U;
int zero = 0;
unsigned int var_11 = 63267350U;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 4158097629U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
