#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = -1212382565;
unsigned short var_3 = (unsigned short)7196;
short var_4 = (short)-9256;
unsigned long long int var_6 = 4055139514777866559ULL;
unsigned int var_7 = 746299989U;
signed char var_9 = (signed char)-29;
unsigned char var_10 = (unsigned char)171;
_Bool var_12 = (_Bool)0;
long long int var_14 = 3617566940303221997LL;
unsigned char var_15 = (unsigned char)54;
int zero = 0;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-24896;
int var_21 = -1942922989;
unsigned short var_22 = (unsigned short)50642;
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
