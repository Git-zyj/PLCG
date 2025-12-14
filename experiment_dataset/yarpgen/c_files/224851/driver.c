#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57723;
unsigned short var_1 = (unsigned short)9464;
signed char var_2 = (signed char)126;
short var_3 = (short)3582;
unsigned char var_4 = (unsigned char)7;
unsigned char var_5 = (unsigned char)56;
unsigned int var_6 = 247966969U;
long long int var_8 = 8252458692029011542LL;
short var_9 = (short)17646;
long long int var_10 = 6504489692366766647LL;
unsigned long long int var_11 = 5721148936942068793ULL;
long long int var_12 = 2384542388515707381LL;
int zero = 0;
unsigned char var_13 = (unsigned char)162;
unsigned char var_14 = (unsigned char)245;
unsigned int var_15 = 4041862002U;
unsigned char var_16 = (unsigned char)93;
_Bool var_17 = (_Bool)0;
signed char var_18 = (signed char)121;
short var_19 = (short)-20369;
signed char var_20 = (signed char)-49;
unsigned short var_21 = (unsigned short)43639;
signed char var_22 = (signed char)118;
unsigned int arr_0 [20] ;
unsigned short arr_1 [20] ;
unsigned char arr_2 [20] [20] ;
unsigned short arr_5 [20] ;
short arr_8 [20] [20] ;
signed char arr_10 [20] ;
unsigned int arr_13 [16] ;
_Bool arr_3 [20] ;
unsigned char arr_4 [20] ;
unsigned int arr_14 [16] ;
short arr_15 [16] [16] ;
long long int arr_16 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 1290096010U : 3943927221U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (unsigned short)52052 : (unsigned short)60214;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)247;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (unsigned short)13095;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = (short)-12157;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_10 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = 2311660013U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned char)65 : (unsigned char)233;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_14 [i_0] = 3244313414U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_15 [i_0] [i_1] = (short)-32078;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_16 [i_0] = 1072623493247997660LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
