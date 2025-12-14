#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8014159406662482377ULL;
_Bool var_2 = (_Bool)1;
unsigned short var_7 = (unsigned short)25900;
unsigned long long int var_8 = 8620985639728896048ULL;
unsigned char var_9 = (unsigned char)173;
unsigned long long int var_10 = 17469081967157187714ULL;
unsigned char var_13 = (unsigned char)109;
int zero = 0;
unsigned int var_14 = 2486422049U;
_Bool var_15 = (_Bool)1;
short var_16 = (short)22749;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)93;
unsigned int var_19 = 1470132745U;
int arr_0 [14] ;
_Bool arr_1 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 442012144;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
