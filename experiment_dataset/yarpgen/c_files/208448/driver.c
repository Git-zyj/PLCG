#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)2456;
short var_2 = (short)7924;
long long int var_7 = 7907678334706533054LL;
long long int var_13 = 5880475544277836959LL;
unsigned short var_14 = (unsigned short)10725;
int zero = 0;
unsigned int var_15 = 873401237U;
_Bool var_16 = (_Bool)1;
unsigned char var_17 = (unsigned char)205;
long long int var_18 = 7651520882765600792LL;
int var_19 = -266072867;
unsigned long long int var_20 = 7896241281974256990ULL;
unsigned char arr_0 [22] ;
unsigned long long int arr_1 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (unsigned char)132;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 16727223523171871325ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
