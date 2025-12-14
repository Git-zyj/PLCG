#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2981409852U;
signed char var_1 = (signed char)-55;
signed char var_4 = (signed char)13;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)31;
unsigned short var_8 = (unsigned short)29588;
signed char var_9 = (signed char)-31;
signed char var_10 = (signed char)-117;
long long int var_12 = -3227142385250553263LL;
signed char var_15 = (signed char)75;
long long int var_17 = 5526402766559287678LL;
signed char var_18 = (signed char)-60;
int zero = 0;
unsigned int var_20 = 2828609905U;
signed char var_21 = (signed char)97;
unsigned int var_22 = 2841572186U;
short var_23 = (short)-5806;
int arr_1 [19] ;
unsigned int arr_2 [19] [19] ;
signed char arr_3 [19] ;
unsigned int arr_5 [19] [19] [19] ;
short arr_6 [19] [19] [19] ;
signed char arr_7 [19] [19] [19] ;
long long int arr_8 [19] ;
signed char arr_9 [19] ;
signed char arr_10 [19] ;
short arr_11 [19] [19] ;
signed char arr_14 [17] ;
unsigned char arr_15 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = -638906176;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = 3479062709U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (signed char)-76;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 3713163195U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)31671;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-96;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_8 [i_0] = 6503444296635212788LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_9 [i_0] = (signed char)92;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_10 [i_0] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_11 [i_0] [i_1] = (short)-27683;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_14 [i_0] = (signed char)-34;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_15 [i_0] = (unsigned char)203;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
