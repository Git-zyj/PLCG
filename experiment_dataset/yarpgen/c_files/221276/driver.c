#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 10310810915696565243ULL;
unsigned long long int var_4 = 17762482170766771770ULL;
unsigned short var_5 = (unsigned short)39514;
signed char var_6 = (signed char)-27;
signed char var_7 = (signed char)-78;
unsigned long long int var_8 = 3658090687127808753ULL;
_Bool var_13 = (_Bool)0;
short var_14 = (short)17346;
short var_15 = (short)18043;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 14976041805197034661ULL;
unsigned char var_19 = (unsigned char)239;
long long int var_20 = -5820543185883829674LL;
signed char var_21 = (signed char)-56;
int var_22 = 1671634403;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
