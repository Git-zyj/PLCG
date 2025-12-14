#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)17;
short var_6 = (short)-1185;
signed char var_7 = (signed char)-30;
unsigned short var_9 = (unsigned short)5331;
_Bool var_10 = (_Bool)0;
long long int var_11 = 8428670410664593176LL;
long long int var_13 = -4555885863789260082LL;
unsigned long long int var_14 = 3371859418707040827ULL;
unsigned long long int var_15 = 2399098955412377401ULL;
unsigned int var_16 = 3023192243U;
short var_19 = (short)17893;
int zero = 0;
unsigned char var_20 = (unsigned char)183;
_Bool var_21 = (_Bool)0;
long long int var_22 = 846899967575586357LL;
int var_23 = -1041420161;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
