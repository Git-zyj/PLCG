#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_5 = (short)-16145;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 10601874797750150923ULL;
unsigned int var_8 = 686479504U;
int var_9 = -587722724;
unsigned long long int var_11 = 5964024214362516875ULL;
signed char var_12 = (signed char)118;
unsigned long long int var_13 = 16548537233033538264ULL;
unsigned long long int var_14 = 31270989856886534ULL;
unsigned int var_15 = 3695178899U;
int zero = 0;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1874481383U;
long long int var_18 = 453094133097158339LL;
unsigned int var_19 = 436949272U;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
short var_22 = (short)-24331;
long long int var_23 = 4897417290679777973LL;
unsigned short var_24 = (unsigned short)39776;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)59332;
unsigned long long int var_27 = 2716583553130311512ULL;
unsigned int var_28 = 1450481486U;
short var_29 = (short)9674;
unsigned int arr_0 [12] ;
unsigned long long int arr_4 [16] ;
unsigned short arr_9 [16] [16] [16] ;
unsigned long long int arr_15 [16] ;
long long int arr_18 [18] [18] ;
unsigned short arr_27 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1308150206U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 1879305534699212991ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)64743 : (unsigned short)57479;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 15325986966486609792ULL : 16481606466644968837ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = -3253548469744690097LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (unsigned short)46189;
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
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_27 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
