#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)97;
unsigned long long int var_1 = 6880212380869475482ULL;
unsigned long long int var_2 = 12131162248374194120ULL;
_Bool var_3 = (_Bool)1;
int var_4 = 1758184264;
unsigned char var_5 = (unsigned char)182;
unsigned char var_6 = (unsigned char)63;
_Bool var_7 = (_Bool)1;
long long int var_8 = -5648655235506737036LL;
unsigned long long int var_9 = 7803635327841184209ULL;
unsigned long long int var_10 = 17531494237588180494ULL;
unsigned int var_11 = 3658533118U;
signed char var_12 = (signed char)1;
signed char var_14 = (signed char)-119;
int var_15 = -1518275666;
signed char var_16 = (signed char)-87;
unsigned char var_17 = (unsigned char)20;
int zero = 0;
unsigned char var_18 = (unsigned char)184;
unsigned char var_19 = (unsigned char)128;
unsigned char var_20 = (unsigned char)236;
int var_21 = -130381420;
signed char var_22 = (signed char)30;
int var_23 = 1580686031;
signed char var_24 = (signed char)-68;
int var_25 = 686487522;
short var_26 = (short)-27031;
unsigned int var_27 = 2925435119U;
unsigned char var_28 = (unsigned char)9;
int var_29 = 36981434;
signed char var_30 = (signed char)-66;
int var_31 = -955827594;
long long int var_32 = -6895486272727895964LL;
unsigned char arr_0 [19] ;
int arr_1 [19] [19] ;
unsigned short arr_2 [19] ;
unsigned short arr_3 [10] [10] ;
int arr_4 [10] ;
int arr_7 [17] ;
unsigned char arr_8 [17] ;
int arr_12 [17] [17] [17] ;
signed char arr_22 [19] [19] ;
int arr_23 [19] ;
signed char arr_24 [19] ;
_Bool arr_27 [19] [19] [19] [19] ;
int arr_16 [17] ;
_Bool arr_17 [17] ;
int arr_20 [17] ;
short arr_21 [17] [17] [17] ;
int arr_28 [19] [19] ;
short arr_29 [19] [19] [19] ;
unsigned char arr_30 [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_1 [i_0] [i_1] = 1493687932;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned short)54325;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)37389;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -1039215375;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? -1315294323 : -1796494407;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 1060895994;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)-14;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_23 [i_0] = -616977974;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_24 [i_0] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? -681021116 : 93314526;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_17 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_20 [i_0] = (i_0 % 2 == 0) ? -1530163225 : 68832483;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-27359 : (short)-20803;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_28 [i_0] [i_1] = 1303769107;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (short)-17403;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_30 [i_0] [i_1] = (unsigned char)110;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_20 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_21 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
