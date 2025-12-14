#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26510;
int var_1 = -721107779;
int var_2 = 448549084;
unsigned char var_3 = (unsigned char)87;
long long int var_4 = -4329048447894890089LL;
unsigned short var_5 = (unsigned short)9713;
long long int var_6 = -1022290926936631325LL;
short var_7 = (short)26330;
unsigned short var_8 = (unsigned short)48631;
unsigned long long int var_9 = 12733339478103922956ULL;
short var_10 = (short)22159;
signed char var_11 = (signed char)-48;
long long int var_12 = 4419544563538715490LL;
signed char var_14 = (signed char)-55;
short var_15 = (short)31733;
int zero = 0;
unsigned long long int var_16 = 6102569468670424260ULL;
_Bool var_17 = (_Bool)0;
unsigned short var_18 = (unsigned short)33479;
short var_19 = (short)-15800;
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
