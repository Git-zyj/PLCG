#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3565848627U;
unsigned int var_3 = 3215612099U;
int var_5 = 1814352355;
unsigned short var_6 = (unsigned short)46511;
unsigned short var_9 = (unsigned short)23406;
unsigned long long int var_10 = 1378845684840079311ULL;
signed char var_11 = (signed char)68;
int var_13 = 950018775;
unsigned int var_14 = 1491892043U;
int zero = 0;
long long int var_15 = 1719462528164325409LL;
unsigned short var_16 = (unsigned short)26315;
unsigned short var_17 = (unsigned short)40913;
unsigned long long int var_18 = 9850000986635627904ULL;
unsigned short var_19 = (unsigned short)31858;
long long int var_20 = -6646122610217394516LL;
long long int var_21 = -5359498050825265284LL;
unsigned short var_22 = (unsigned short)52002;
unsigned int var_23 = 622370071U;
int var_24 = -650860270;
unsigned int var_25 = 977425249U;
unsigned short arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned int arr_2 [21] ;
unsigned short arr_6 [23] ;
long long int arr_8 [23] ;
unsigned char arr_9 [23] ;
unsigned int arr_12 [23] [23] [23] ;
unsigned long long int arr_3 [21] [21] ;
unsigned short arr_10 [23] [23] ;
_Bool arr_15 [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)28847;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)44972;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 4058736072U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = (unsigned short)5561;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = -2940405006079148804LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_9 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 3265911658U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = 4446489367807118485ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)60395;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
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
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    hash(&seed, arr_15 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
