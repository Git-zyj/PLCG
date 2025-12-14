#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)7975;
signed char var_1 = (signed char)73;
int var_2 = 206378858;
int var_3 = -70587553;
short var_5 = (short)-13692;
unsigned int var_6 = 368922145U;
unsigned char var_7 = (unsigned char)255;
unsigned long long int var_8 = 5057458042053703363ULL;
short var_9 = (short)13407;
int zero = 0;
int var_10 = -102613794;
unsigned char var_11 = (unsigned char)87;
unsigned int var_12 = 1011655232U;
unsigned int var_13 = 1816220716U;
signed char var_14 = (signed char)62;
unsigned long long int var_15 = 1516299151524718007ULL;
signed char var_16 = (signed char)-125;
long long int var_17 = -3807641403333810568LL;
unsigned int var_18 = 989866488U;
_Bool var_19 = (_Bool)0;
signed char var_20 = (signed char)-43;
int var_21 = 282234240;
unsigned long long int var_22 = 7221680976736019690ULL;
signed char var_23 = (signed char)10;
signed char var_24 = (signed char)48;
short var_25 = (short)-9101;
int var_26 = -1278269634;
signed char var_27 = (signed char)19;
unsigned long long int var_28 = 17196442711450593311ULL;
unsigned long long int var_29 = 17522557594358561584ULL;
int var_30 = -2120906603;
unsigned long long int arr_0 [17] [17] ;
int arr_1 [17] [17] ;
unsigned short arr_2 [17] ;
unsigned long long int arr_5 [17] ;
unsigned short arr_6 [11] ;
short arr_7 [11] [11] ;
int arr_10 [11] ;
unsigned long long int arr_11 [11] ;
long long int arr_12 [11] [11] [11] ;
unsigned int arr_13 [11] [11] [11] ;
long long int arr_18 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 6139576256336264361ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = -241299181;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = (unsigned short)7720;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 4902579931494884126ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned short)58561;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (short)28083;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_10 [i_0] = -276537424;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 13855744402456830795ULL : 6305244952965916656ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -3396893099512528219LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 2521482805U : 4217770782U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_18 [i_0] = 4446463793733025167LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
