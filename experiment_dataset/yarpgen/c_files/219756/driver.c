#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)38927;
unsigned short var_3 = (unsigned short)19390;
unsigned short var_4 = (unsigned short)40292;
signed char var_5 = (signed char)-46;
unsigned short var_6 = (unsigned short)64383;
long long int var_7 = -7849768093542815934LL;
unsigned long long int var_8 = 4683478973922148739ULL;
short var_10 = (short)6347;
unsigned int var_11 = 3357827958U;
int zero = 0;
long long int var_15 = -1046206562712752434LL;
long long int var_16 = 3513391821789310100LL;
signed char var_17 = (signed char)58;
signed char var_18 = (signed char)19;
unsigned short var_19 = (unsigned short)8662;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)-73;
short var_22 = (short)-18412;
long long int var_23 = 5560735021909700506LL;
long long int var_24 = 3726822756934289028LL;
signed char var_25 = (signed char)-11;
unsigned long long int var_26 = 17451350516241484862ULL;
unsigned short var_27 = (unsigned short)8608;
_Bool var_28 = (_Bool)1;
unsigned char var_29 = (unsigned char)20;
int arr_0 [11] ;
unsigned short arr_1 [11] [11] ;
long long int arr_2 [11] [11] ;
signed char arr_3 [11] [11] [11] ;
signed char arr_4 [11] ;
_Bool arr_9 [11] [11] [11] [11] [11] ;
signed char arr_11 [11] ;
unsigned char arr_12 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 1028142546;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)9347;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 5356814336610658975LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)-61;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_4 [i_0] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (signed char)-108;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_12 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)86 : (unsigned char)14;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
