#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17210095001614981379ULL;
unsigned long long int var_1 = 10384066438703115756ULL;
unsigned short var_2 = (unsigned short)51255;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)117;
unsigned long long int var_8 = 12614533102741167812ULL;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)195;
unsigned char var_13 = (unsigned char)201;
short var_14 = (short)26079;
_Bool var_15 = (_Bool)0;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)91;
_Bool var_18 = (_Bool)0;
_Bool var_19 = (_Bool)1;
unsigned int var_20 = 4107226230U;
unsigned char var_21 = (unsigned char)126;
unsigned char var_22 = (unsigned char)106;
short var_23 = (short)11135;
_Bool var_24 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
