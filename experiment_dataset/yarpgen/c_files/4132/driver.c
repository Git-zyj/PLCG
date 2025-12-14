#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7228913352806791722ULL;
unsigned long long int var_1 = 9646251818938824118ULL;
unsigned long long int var_2 = 1238201342381381558ULL;
signed char var_3 = (signed char)-11;
int var_4 = 1376449805;
_Bool var_5 = (_Bool)1;
int var_6 = -624377534;
signed char var_8 = (signed char)-18;
long long int var_10 = 8698640206439193429LL;
unsigned char var_12 = (unsigned char)138;
unsigned short var_14 = (unsigned short)992;
unsigned short var_15 = (unsigned short)36083;
unsigned long long int var_16 = 14989335343208812556ULL;
unsigned int var_18 = 51836316U;
unsigned long long int var_19 = 3765328708880768359ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)190;
unsigned long long int var_21 = 54710094224671324ULL;
signed char var_22 = (signed char)16;
unsigned short var_23 = (unsigned short)41920;
_Bool var_24 = (_Bool)1;
_Bool var_25 = (_Bool)1;
long long int var_26 = 4171086215601575367LL;
unsigned short var_27 = (unsigned short)14105;
unsigned int arr_1 [19] [19] ;
unsigned char arr_3 [19] ;
long long int arr_5 [19] [19] [19] ;
unsigned short arr_6 [19] [19] [19] ;
unsigned short arr_8 [19] [19] [19] ;
_Bool arr_11 [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 50009080U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)204;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -6852252641457450071LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)43712;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)30016 : (unsigned short)34679;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
