#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned int var_2 = 4166794047U;
_Bool var_4 = (_Bool)0;
unsigned long long int var_9 = 13413080060569258289ULL;
long long int var_10 = 1619342086368048028LL;
unsigned char var_12 = (unsigned char)228;
unsigned int var_13 = 4162709179U;
_Bool var_14 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)0;
long long int var_16 = 3764948855308293878LL;
unsigned int var_17 = 517371706U;
short var_18 = (short)208;
long long int var_19 = -6065395153508250290LL;
long long int var_20 = 9192304331558308114LL;
unsigned char var_21 = (unsigned char)63;
short var_22 = (short)27856;
unsigned char var_23 = (unsigned char)16;
signed char arr_0 [25] ;
unsigned int arr_1 [25] ;
unsigned char arr_3 [21] [21] ;
unsigned char arr_4 [21] ;
unsigned char arr_7 [12] ;
unsigned char arr_8 [12] ;
short arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)-3 : (signed char)-46;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 1058369681U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)34;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_8 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)19945 : (short)15232;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
