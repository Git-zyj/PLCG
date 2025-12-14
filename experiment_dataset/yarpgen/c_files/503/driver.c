#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)30175;
long long int var_3 = -8362054121013783987LL;
unsigned char var_11 = (unsigned char)224;
long long int var_12 = -5541531751487518087LL;
unsigned long long int var_14 = 11335612441466302440ULL;
unsigned long long int var_16 = 1348716232063446292ULL;
int zero = 0;
unsigned long long int var_18 = 13040859793967777611ULL;
unsigned short var_19 = (unsigned short)12540;
int var_20 = 393462765;
long long int var_21 = -521406837294322798LL;
signed char var_22 = (signed char)-78;
unsigned long long int var_23 = 4768354490535661961ULL;
long long int var_24 = 6621278993871897835LL;
unsigned int var_25 = 1017029867U;
long long int var_26 = -8208793172117704750LL;
unsigned short var_27 = (unsigned short)28104;
unsigned int arr_0 [16] ;
unsigned long long int arr_1 [16] ;
unsigned long long int arr_10 [16] ;
int arr_16 [16] [16] [16] [16] [16] [16] ;
unsigned int arr_4 [16] [16] ;
int arr_17 [16] [16] ;
unsigned short arr_22 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 2562023333U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1794439524635894274ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 12991289752360946748ULL : 13964099789300272311ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? -310686036 : -2052920599;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = 2648653346U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_17 [i_0] [i_1] = -1430936723;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_22 [i_0] = (unsigned short)50934;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_22 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
