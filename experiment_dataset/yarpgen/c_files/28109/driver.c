#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)17229;
unsigned char var_2 = (unsigned char)63;
signed char var_3 = (signed char)-21;
unsigned long long int var_5 = 11436618350554694923ULL;
unsigned char var_6 = (unsigned char)4;
int var_7 = 1150590436;
short var_8 = (short)16310;
short var_10 = (short)-263;
unsigned char var_11 = (unsigned char)74;
unsigned long long int var_12 = 7872129209803951754ULL;
unsigned char var_13 = (unsigned char)60;
unsigned int var_14 = 2631872768U;
int zero = 0;
unsigned char var_16 = (unsigned char)81;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 6245219248653447579ULL;
unsigned char var_19 = (unsigned char)231;
unsigned int var_20 = 1697623375U;
short var_21 = (short)18140;
_Bool var_22 = (_Bool)1;
long long int var_23 = 4282513774074265114LL;
_Bool arr_1 [17] ;
short arr_2 [17] [17] ;
_Bool arr_9 [17] [17] [17] [17] ;
unsigned short arr_12 [20] ;
unsigned int arr_14 [20] ;
short arr_7 [17] ;
unsigned int arr_10 [17] [17] [17] ;
short arr_11 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)4838;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = (unsigned short)53666;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = 2207610476U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (short)961;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 2333810590U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_11 [i_0] [i_1] = (short)17872;
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
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
