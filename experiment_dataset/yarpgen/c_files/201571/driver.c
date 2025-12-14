#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6930;
_Bool var_3 = (_Bool)1;
unsigned int var_5 = 618652534U;
unsigned int var_6 = 405228641U;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)55789;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)-107;
long long int var_14 = 4502444841628709806LL;
int zero = 0;
unsigned short var_16 = (unsigned short)26990;
_Bool var_17 = (_Bool)0;
long long int var_18 = -626020538574580410LL;
signed char var_19 = (signed char)-124;
_Bool var_20 = (_Bool)0;
unsigned short var_21 = (unsigned short)2079;
int var_22 = -550687283;
signed char var_23 = (signed char)106;
int arr_0 [17] ;
unsigned char arr_1 [17] ;
signed char arr_2 [17] ;
signed char arr_6 [17] ;
short arr_3 [17] ;
unsigned short arr_7 [17] [17] [17] ;
unsigned int arr_10 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -93206429;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (signed char)48;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (short)5083;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)43705;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_10 [i_0] = 1171743858U;
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
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
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
