#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4255815674U;
signed char var_1 = (signed char)-26;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-54;
long long int var_4 = 3093453267341397569LL;
unsigned int var_5 = 2776919830U;
long long int var_6 = -5838798656204895476LL;
unsigned char var_7 = (unsigned char)165;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 1718229926U;
_Bool var_11 = (_Bool)0;
long long int var_12 = -3431426341922712376LL;
int zero = 0;
long long int var_13 = -4129409799149334224LL;
long long int var_14 = -8470550545891555954LL;
long long int var_15 = -6485944788409082396LL;
unsigned char var_16 = (unsigned char)215;
long long int var_17 = -2041785790557668286LL;
long long int var_18 = 6828220487469986064LL;
_Bool var_19 = (_Bool)0;
unsigned short arr_1 [18] ;
long long int arr_3 [18] [18] ;
_Bool arr_4 [18] ;
signed char arr_5 [18] ;
signed char arr_10 [18] [18] [18] ;
_Bool arr_9 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (unsigned short)56827;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = 1311349558199179992LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (signed char)-70;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)-89;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_9 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
