#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 461288171;
unsigned int var_2 = 2549591070U;
signed char var_3 = (signed char)-68;
signed char var_5 = (signed char)107;
unsigned long long int var_7 = 16203025408834278826ULL;
unsigned char var_8 = (unsigned char)120;
int var_11 = 1327397456;
unsigned int var_12 = 4264907987U;
unsigned int var_14 = 1114168365U;
_Bool var_16 = (_Bool)0;
unsigned char var_17 = (unsigned char)219;
int var_18 = -1262663885;
int zero = 0;
unsigned int var_19 = 2573112310U;
int var_20 = 1960545723;
unsigned long long int var_21 = 1275654264868995384ULL;
unsigned char var_22 = (unsigned char)65;
unsigned long long int var_23 = 5208203392336306321ULL;
unsigned long long int var_24 = 12605487111697306622ULL;
_Bool var_25 = (_Bool)0;
long long int var_26 = -1490366616685843668LL;
_Bool var_27 = (_Bool)1;
short var_28 = (short)-27600;
short var_29 = (short)-14033;
unsigned int var_30 = 600815453U;
short var_31 = (short)-8024;
long long int var_32 = 3911154137061847841LL;
unsigned long long int arr_0 [20] [20] ;
unsigned long long int arr_1 [20] [20] ;
long long int arr_2 [20] ;
unsigned int arr_3 [20] ;
unsigned char arr_4 [20] ;
unsigned short arr_5 [20] [20] [20] ;
unsigned int arr_7 [20] [20] [20] ;
unsigned short arr_10 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = 7883937145279576756ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_1 [i_0] [i_1] = 18065771484166845863ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = -5167659630981449552LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 2141476915U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned short)59373;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = 313492010U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)8712;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
