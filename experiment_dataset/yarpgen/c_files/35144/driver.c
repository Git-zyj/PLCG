#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2653807173U;
_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 9263008461366982488ULL;
signed char var_6 = (signed char)91;
signed char var_8 = (signed char)-103;
unsigned long long int var_10 = 2937854195989781136ULL;
unsigned short var_12 = (unsigned short)11291;
signed char var_13 = (signed char)74;
int var_15 = -354760809;
long long int var_16 = 8229248613026234655LL;
int zero = 0;
int var_17 = 1002809442;
unsigned long long int var_18 = 18272087618224345743ULL;
short var_19 = (short)28682;
unsigned char var_20 = (unsigned char)103;
int var_21 = -504194300;
unsigned long long int var_22 = 16905786552870088659ULL;
unsigned long long int arr_0 [14] ;
unsigned short arr_1 [14] [14] ;
int arr_5 [14] ;
unsigned long long int arr_6 [14] ;
signed char arr_7 [14] ;
unsigned int arr_8 [14] ;
unsigned int arr_2 [14] ;
int arr_3 [14] ;
signed char arr_10 [14] [14] ;
unsigned char arr_15 [14] [14] ;
unsigned long long int arr_16 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 2439166652423533077ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)56983;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = -1267850769;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = 10052555661996517698ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_7 [i_0] = (signed char)-38;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = 301157020U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2271367537U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = -361602849;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)10 : (signed char)-49;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_15 [i_0] [i_1] = (unsigned char)123;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = 7274446463194441571ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
