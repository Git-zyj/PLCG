#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1290111747;
unsigned int var_2 = 4144412497U;
int var_4 = 897813212;
signed char var_5 = (signed char)88;
long long int var_17 = -6248122448533524286LL;
int zero = 0;
unsigned char var_19 = (unsigned char)190;
unsigned long long int var_20 = 15491702968660498635ULL;
unsigned long long int var_21 = 17449112734447024348ULL;
unsigned char var_22 = (unsigned char)255;
unsigned char var_23 = (unsigned char)160;
unsigned short var_24 = (unsigned short)33002;
int var_25 = 763441919;
int var_26 = -1415843856;
_Bool arr_3 [16] [16] ;
unsigned short arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)41897 : (unsigned short)38118;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
