#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 460581950038807627LL;
unsigned short var_2 = (unsigned short)40208;
unsigned char var_4 = (unsigned char)45;
long long int var_5 = 1983058476360639783LL;
unsigned short var_9 = (unsigned short)29670;
short var_11 = (short)31976;
int var_15 = -909312662;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = 4529882968850215803LL;
short var_22 = (short)-8874;
signed char var_23 = (signed char)31;
short var_24 = (short)-7200;
long long int var_25 = -2422439112361928459LL;
int var_26 = 376427589;
short var_27 = (short)-12338;
unsigned char arr_1 [14] [14] ;
short arr_2 [14] [14] ;
long long int arr_4 [14] [14] [14] ;
unsigned long long int arr_8 [14] ;
int arr_3 [14] ;
unsigned int arr_13 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)218 : (unsigned char)24;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-26090;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -6472025509886798100LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 17440343786837584338ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 1696497221 : -169631982;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_13 [i_0] [i_1] = (i_1 % 2 == 0) ? 3444820317U : 135689814U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
