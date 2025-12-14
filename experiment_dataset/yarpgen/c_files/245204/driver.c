#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2027222707U;
unsigned int var_1 = 2757935906U;
unsigned char var_2 = (unsigned char)110;
short var_3 = (short)-5200;
unsigned char var_4 = (unsigned char)183;
unsigned int var_5 = 1718923600U;
_Bool var_6 = (_Bool)0;
unsigned short var_7 = (unsigned short)33416;
unsigned long long int var_8 = 13653379732825914678ULL;
int var_9 = 1762746305;
unsigned int var_10 = 2959415276U;
unsigned int var_11 = 1969441512U;
int var_13 = 1258845836;
unsigned int var_14 = 1697582868U;
int zero = 0;
unsigned char var_15 = (unsigned char)51;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)28;
signed char var_18 = (signed char)-55;
int var_19 = -967964790;
unsigned int arr_0 [16] [16] ;
unsigned int arr_1 [16] ;
unsigned short arr_2 [16] [16] ;
unsigned long long int arr_4 [16] [16] ;
long long int arr_5 [16] ;
signed char arr_6 [16] [16] ;
signed char arr_8 [16] [16] [16] ;
unsigned char arr_3 [16] ;
unsigned long long int arr_9 [16] ;
int arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 3194317315U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 1791997592U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)38737;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 17697536321982319399ULL : 2959362351001727631ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 6446551039560336252LL : 1133971118376235640LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned char)186;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 13110813929037668079ULL : 10653374873368173339ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = -392240092;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
