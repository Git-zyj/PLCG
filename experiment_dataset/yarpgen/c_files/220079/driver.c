#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1316121826131682255LL;
unsigned int var_1 = 1676161344U;
unsigned int var_2 = 4090090387U;
unsigned int var_3 = 1087761198U;
unsigned int var_4 = 412660656U;
unsigned int var_5 = 1450376114U;
long long int var_6 = -186573147152771180LL;
unsigned short var_7 = (unsigned short)59066;
_Bool var_8 = (_Bool)0;
long long int var_9 = 136500329114441128LL;
long long int var_10 = -1194532797089770206LL;
long long int var_12 = -3335909589523213308LL;
unsigned int var_13 = 966264620U;
int zero = 0;
unsigned int var_14 = 30502384U;
_Bool var_15 = (_Bool)1;
unsigned int var_16 = 140470410U;
long long int var_17 = -5117633789212358327LL;
short var_18 = (short)-12573;
_Bool var_19 = (_Bool)0;
unsigned short var_20 = (unsigned short)55360;
unsigned int var_21 = 3966068212U;
_Bool var_22 = (_Bool)1;
unsigned int var_23 = 679253051U;
unsigned short var_24 = (unsigned short)41546;
_Bool var_25 = (_Bool)1;
unsigned short var_26 = (unsigned short)45289;
unsigned long long int var_27 = 2319552994791344343ULL;
unsigned long long int var_28 = 14014668664412930780ULL;
unsigned int var_29 = 234100345U;
short var_30 = (short)-28705;
unsigned short arr_0 [14] [14] ;
_Bool arr_1 [14] [14] ;
unsigned int arr_2 [14] ;
unsigned int arr_4 [14] ;
long long int arr_5 [14] ;
_Bool arr_6 [14] ;
unsigned long long int arr_8 [14] [14] [14] [14] ;
long long int arr_9 [14] [14] [14] ;
short arr_11 [14] ;
_Bool arr_14 [22] [22] ;
unsigned int arr_15 [22] ;
short arr_16 [22] ;
long long int arr_17 [22] [22] ;
unsigned long long int arr_18 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)6035;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 3297030232U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 4251542227U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -2276566420300528260LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 14335281549827882602ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -3068794323658737689LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (short)-16533;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_14 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_15 [i_0] = 3117605396U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? (short)24420 : (short)22419;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? 6725257799971586860LL : 2312676261527250404LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_18 [i_0] = 14632403897901151795ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
    hash(&seed, var_30);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_18 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
