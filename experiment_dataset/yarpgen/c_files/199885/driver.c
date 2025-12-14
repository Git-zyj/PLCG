#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3873351477U;
short var_2 = (short)-17430;
unsigned short var_5 = (unsigned short)33236;
long long int var_6 = 1089643430385075274LL;
_Bool var_7 = (_Bool)1;
long long int var_8 = 766028827693139343LL;
unsigned int var_9 = 2284814022U;
unsigned long long int var_12 = 7940582822999759269ULL;
short var_14 = (short)-3385;
long long int var_17 = -7611218623521837140LL;
int zero = 0;
short var_18 = (short)-15491;
signed char var_19 = (signed char)-33;
int var_20 = -341031087;
unsigned int var_21 = 1406667151U;
unsigned short var_22 = (unsigned short)17143;
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
