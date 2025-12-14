#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8701903164975145571LL;
long long int var_2 = -4361184220975898024LL;
signed char var_3 = (signed char)58;
unsigned char var_4 = (unsigned char)117;
int var_5 = -65510452;
short var_6 = (short)9281;
unsigned long long int var_7 = 7143271883535246285ULL;
int var_9 = 106148326;
unsigned short var_11 = (unsigned short)25531;
unsigned int var_12 = 845718827U;
unsigned char var_14 = (unsigned char)84;
_Bool var_15 = (_Bool)1;
unsigned char var_17 = (unsigned char)62;
int zero = 0;
int var_19 = -147373678;
unsigned short var_20 = (unsigned short)26958;
short var_21 = (short)26983;
int var_22 = 1971222422;
void init() {
}

void checksum() {
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
