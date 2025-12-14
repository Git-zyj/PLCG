#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4997780898076239318LL;
int var_1 = 1422954346;
long long int var_2 = 8936502501171658706LL;
short var_3 = (short)18775;
unsigned long long int var_4 = 10420697225336332087ULL;
signed char var_7 = (signed char)99;
unsigned short var_8 = (unsigned short)27996;
long long int var_9 = -3674252070296699894LL;
long long int var_11 = 4754982270425526267LL;
int var_12 = 1027830985;
_Bool var_13 = (_Bool)1;
long long int var_15 = 8068232024527072798LL;
int zero = 0;
long long int var_16 = -5541989659075250963LL;
unsigned char var_17 = (unsigned char)132;
long long int var_18 = 2705952436577430700LL;
long long int var_19 = 653798219243673229LL;
unsigned short var_20 = (unsigned short)33302;
unsigned char var_21 = (unsigned char)72;
unsigned long long int var_22 = 17025111569557564057ULL;
signed char arr_0 [15] [15] ;
long long int arr_1 [15] ;
long long int arr_4 [18] [18] ;
unsigned char arr_5 [18] ;
unsigned int arr_6 [18] ;
signed char arr_11 [23] ;
_Bool arr_2 [15] ;
signed char arr_9 [18] [18] ;
unsigned char arr_10 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-65;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -5728107592611273037LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = -2010544675029101485LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)120 : (unsigned char)77;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? 4160448664U : 1570944196U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_11 [i_0] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)15 : (signed char)63;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned char)190 : (unsigned char)18;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    hash(&seed, arr_10 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
