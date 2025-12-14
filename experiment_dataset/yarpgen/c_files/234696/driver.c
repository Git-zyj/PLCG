#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)1338;
int var_1 = -869288687;
unsigned char var_2 = (unsigned char)107;
unsigned short var_3 = (unsigned short)58084;
short var_4 = (short)-20921;
short var_5 = (short)21754;
signed char var_6 = (signed char)22;
short var_8 = (short)-1347;
short var_9 = (short)-9993;
short var_10 = (short)-22825;
int zero = 0;
short var_11 = (short)25338;
unsigned char var_12 = (unsigned char)44;
unsigned short var_13 = (unsigned short)41969;
_Bool var_14 = (_Bool)1;
_Bool var_15 = (_Bool)0;
signed char var_16 = (signed char)59;
unsigned char var_17 = (unsigned char)34;
long long int var_18 = -5516812517655228811LL;
_Bool arr_0 [24] ;
short arr_2 [24] [24] ;
unsigned char arr_4 [24] [24] [24] ;
unsigned long long int arr_5 [24] ;
unsigned long long int arr_15 [24] ;
unsigned short arr_11 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (short)9044;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned char)114;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 14905159202890950018ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_15 [i_0] = 8112397709185972029ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned short)63224 : (unsigned short)50889;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
