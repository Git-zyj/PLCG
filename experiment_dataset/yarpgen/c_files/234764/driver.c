#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-9692;
unsigned char var_3 = (unsigned char)172;
unsigned char var_4 = (unsigned char)23;
short var_5 = (short)-26945;
long long int var_7 = 5081754877801380673LL;
unsigned int var_8 = 636031862U;
unsigned short var_10 = (unsigned short)49470;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)31461;
unsigned int var_14 = 3358113701U;
_Bool var_15 = (_Bool)1;
int zero = 0;
short var_17 = (short)22874;
long long int var_18 = -5605345219191997400LL;
long long int var_19 = -6009080847836973936LL;
unsigned short var_20 = (unsigned short)38482;
_Bool var_21 = (_Bool)1;
unsigned short var_22 = (unsigned short)11245;
unsigned int var_23 = 4095915483U;
short var_24 = (short)-27961;
unsigned long long int var_25 = 6791747222964802332ULL;
unsigned long long int var_26 = 12358290533874936234ULL;
int var_27 = -569343189;
_Bool var_28 = (_Bool)0;
signed char var_29 = (signed char)-63;
unsigned long long int var_30 = 15947816709403760796ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
