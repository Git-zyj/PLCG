#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3131303973674071560ULL;
int var_3 = 438917302;
long long int var_5 = 2375092852220761046LL;
unsigned short var_7 = (unsigned short)31039;
int var_8 = -1863818412;
signed char var_9 = (signed char)12;
unsigned long long int var_10 = 16051192886466393740ULL;
unsigned long long int var_12 = 16078067671028745377ULL;
unsigned int var_14 = 36748569U;
short var_15 = (short)10225;
unsigned int var_16 = 2747696472U;
int zero = 0;
unsigned long long int var_18 = 17809547951525560462ULL;
unsigned char var_19 = (unsigned char)244;
int var_20 = 2031419471;
_Bool var_21 = (_Bool)0;
short var_22 = (short)-12031;
_Bool var_23 = (_Bool)0;
int var_24 = -529102597;
signed char var_25 = (signed char)52;
unsigned short var_26 = (unsigned short)40050;
signed char var_27 = (signed char)-54;
unsigned long long int var_28 = 1139107850855026029ULL;
unsigned char var_29 = (unsigned char)232;
long long int arr_0 [11] ;
unsigned int arr_1 [11] ;
unsigned int arr_2 [10] [10] ;
unsigned long long int arr_3 [10] [10] ;
unsigned char arr_5 [10] [10] ;
_Bool arr_6 [10] [10] ;
signed char arr_7 [10] ;
long long int arr_8 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = -7654149222289580536LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = 2972966458U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_2 [i_0] [i_1] = 280370119U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = 596798837020416522ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)232;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (signed char)-90;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_8 [i_0] = -3136792367883535277LL;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
