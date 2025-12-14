#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)11;
int var_2 = 1840619761;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)42033;
_Bool var_6 = (_Bool)0;
long long int var_9 = 718427501660466141LL;
long long int var_13 = -8805856746972256894LL;
long long int var_14 = 7902370514531855330LL;
int zero = 0;
long long int var_18 = 742808166140094598LL;
int var_19 = -1045531131;
unsigned short var_20 = (unsigned short)1137;
int var_21 = 490185668;
unsigned char var_22 = (unsigned char)227;
_Bool var_23 = (_Bool)0;
unsigned int arr_0 [22] [22] ;
long long int arr_2 [22] ;
unsigned int arr_6 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = 889305597U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = -4955163815221623884LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = 792420025U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
