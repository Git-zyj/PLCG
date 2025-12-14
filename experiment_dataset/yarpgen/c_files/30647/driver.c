#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = -8662516420586918078LL;
unsigned char var_3 = (unsigned char)106;
unsigned long long int var_4 = 13459903334022699336ULL;
unsigned short var_5 = (unsigned short)18990;
unsigned int var_6 = 3252560349U;
short var_7 = (short)10187;
unsigned short var_8 = (unsigned short)29304;
long long int var_10 = -5294271841013406961LL;
signed char var_12 = (signed char)123;
int zero = 0;
unsigned long long int var_13 = 3447823671317156252ULL;
long long int var_14 = -2793303224784590921LL;
unsigned short var_15 = (unsigned short)46016;
unsigned int var_16 = 2597424389U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
