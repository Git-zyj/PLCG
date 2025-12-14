#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -66610672;
int var_2 = 1686322264;
unsigned long long int var_4 = 6982857886305713046ULL;
unsigned int var_5 = 3896592174U;
signed char var_6 = (signed char)108;
int var_8 = 1292568957;
unsigned char var_10 = (unsigned char)155;
short var_15 = (short)24266;
int zero = 0;
unsigned short var_20 = (unsigned short)58121;
signed char var_21 = (signed char)125;
unsigned long long int var_22 = 17230529376744613408ULL;
long long int var_23 = -1260677744407312486LL;
int var_24 = 981047868;
int var_25 = 1027125680;
long long int var_26 = -8252620587486864463LL;
int var_27 = 1450116106;
unsigned int var_28 = 2263464967U;
unsigned long long int var_29 = 35189088196458649ULL;
unsigned long long int var_30 = 4686268380120464581ULL;
unsigned long long int var_31 = 16035530448580696743ULL;
unsigned short var_32 = (unsigned short)35268;
signed char var_33 = (signed char)125;
unsigned char arr_0 [15] [15] ;
unsigned long long int arr_1 [15] ;
int arr_2 [16] ;
signed char arr_9 [24] [24] [24] ;
unsigned long long int arr_10 [24] [24] ;
int arr_18 [24] [24] [24] [24] ;
_Bool arr_4 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)53;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 3214003523237988441ULL : 16738869819540173171ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? -1188163691 : 1202673929;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-125;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? 523329034868782911ULL : 15951345161338003181ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 1749595505;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
