#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)62;
long long int var_1 = -6609201230805052695LL;
short var_3 = (short)13120;
unsigned long long int var_4 = 6294868202219210226ULL;
unsigned long long int var_5 = 8402955541597140093ULL;
signed char var_7 = (signed char)127;
signed char var_8 = (signed char)-23;
int var_9 = -2106376574;
int zero = 0;
unsigned char var_10 = (unsigned char)247;
unsigned long long int var_11 = 12816445285805802775ULL;
unsigned int var_12 = 2313471988U;
unsigned char var_13 = (unsigned char)100;
signed char var_14 = (signed char)-8;
unsigned int var_15 = 802685663U;
unsigned int var_16 = 3652793957U;
signed char var_17 = (signed char)-61;
unsigned char var_18 = (unsigned char)195;
unsigned int var_19 = 2588347317U;
unsigned short var_20 = (unsigned short)40305;
unsigned int var_21 = 3587139306U;
long long int var_22 = -8732833945485419694LL;
unsigned char var_23 = (unsigned char)147;
short var_24 = (short)10501;
unsigned long long int var_25 = 7673471107527386074ULL;
unsigned short var_26 = (unsigned short)65368;
int arr_0 [19] ;
unsigned char arr_1 [19] ;
unsigned char arr_2 [10] ;
unsigned char arr_14 [25] ;
unsigned short arr_15 [25] ;
unsigned long long int arr_16 [25] [25] ;
long long int arr_17 [25] [25] ;
unsigned char arr_20 [20] ;
unsigned long long int arr_21 [20] [20] ;
unsigned char arr_22 [20] ;
unsigned long long int arr_23 [20] ;
unsigned char arr_25 [20] [20] ;
unsigned char arr_26 [20] [20] ;
signed char arr_32 [20] [20] ;
short arr_8 [14] ;
unsigned char arr_9 [14] [14] ;
unsigned char arr_10 [14] ;
unsigned long long int arr_13 [19] [19] ;
unsigned char arr_18 [25] [25] ;
unsigned short arr_19 [25] ;
signed char arr_24 [20] [20] ;
int arr_28 [20] ;
unsigned char arr_29 [20] [20] ;
unsigned char arr_42 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2027586854;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = (unsigned char)150;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_14 [i_0] = (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_15 [i_0] = (unsigned short)37876;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_16 [i_0] [i_1] = 14984117372751205367ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_17 [i_0] [i_1] = 7429000048892826673LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_20 [i_0] = (unsigned char)205;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_21 [i_0] [i_1] = 15452658171999651282ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_22 [i_0] = (unsigned char)196;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_23 [i_0] = 4838354810622460877ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_25 [i_0] [i_1] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_26 [i_0] [i_1] = (unsigned char)103;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_32 [i_0] [i_1] = (signed char)-21;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = (short)26315;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)176;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_10 [i_0] = (unsigned char)4;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_13 [i_0] [i_1] = 4747275548101054666ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned char)167;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_19 [i_0] = (unsigned short)42984;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_24 [i_0] [i_1] = (signed char)9;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? -1384205198 : -1938825793;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_29 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)223 : (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_42 [i_0] = (unsigned char)14;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_19 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_24 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_28 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_42 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
