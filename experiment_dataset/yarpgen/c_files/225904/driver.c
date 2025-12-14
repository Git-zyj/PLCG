#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)27651;
unsigned long long int var_1 = 9130592108003606773ULL;
unsigned int var_2 = 3381966906U;
unsigned char var_3 = (unsigned char)8;
unsigned long long int var_4 = 3331545362974960583ULL;
unsigned int var_5 = 185518031U;
short var_6 = (short)26058;
unsigned short var_8 = (unsigned short)5924;
signed char var_9 = (signed char)-12;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-29;
int zero = 0;
short var_13 = (short)957;
unsigned char var_14 = (unsigned char)36;
unsigned int var_15 = 636605567U;
unsigned int var_16 = 3886203980U;
int var_17 = -328964447;
unsigned int var_18 = 3540739613U;
long long int var_19 = 2144116786763205585LL;
int var_20 = -141039359;
unsigned short var_21 = (unsigned short)19310;
unsigned int var_22 = 1119506768U;
short var_23 = (short)-27809;
int var_24 = 1703362097;
unsigned short var_25 = (unsigned short)27786;
short var_26 = (short)151;
short var_27 = (short)1404;
unsigned char var_28 = (unsigned char)14;
unsigned short arr_0 [14] ;
long long int arr_1 [14] ;
unsigned int arr_2 [14] ;
short arr_3 [14] [14] ;
unsigned short arr_4 [14] [14] [14] ;
long long int arr_5 [14] [14] [14] ;
int arr_6 [14] ;
unsigned int arr_9 [14] ;
unsigned short arr_10 [14] [14] ;
unsigned short arr_11 [14] ;
short arr_12 [14] [14] [14] [14] ;
signed char arr_14 [14] [14] [14] ;
long long int arr_15 [14] ;
unsigned int arr_17 [14] [14] ;
signed char arr_18 [14] [14] [14] ;
_Bool arr_19 [14] [14] ;
short arr_24 [14] [14] ;
short arr_7 [14] [14] [14] ;
unsigned short arr_8 [14] ;
int arr_16 [14] ;
short arr_20 [14] [14] [14] [14] ;
unsigned char arr_21 [14] [14] ;
unsigned short arr_26 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned short)8619;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 7970693975301940131LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 2058816643U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = (short)6901;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)3154;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = -1096913444856841900LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = -636214093;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_9 [i_0] = 3853516648U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)3620;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = (unsigned short)16330;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (short)9488;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (signed char)88;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = -4992786336464688313LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_17 [i_0] [i_1] = 1333012230U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_18 [i_0] [i_1] [i_2] = (signed char)77;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_19 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_24 [i_0] [i_1] = (short)-20439;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)10952;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (unsigned short)27806;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_16 [i_0] = -473741885;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (short)15605 : (short)14852;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_21 [i_0] [i_1] = (unsigned char)213;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_26 [i_0] = (unsigned short)12303;
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
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
