#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)55;
signed char var_2 = (signed char)-55;
short var_3 = (short)22576;
signed char var_4 = (signed char)27;
unsigned long long int var_5 = 18416423409736735040ULL;
unsigned short var_6 = (unsigned short)34861;
unsigned char var_7 = (unsigned char)226;
long long int var_8 = -8296906744706082665LL;
int var_9 = 1249667752;
unsigned short var_10 = (unsigned short)59735;
int zero = 0;
unsigned long long int var_11 = 6954261560752530097ULL;
int var_12 = -8566906;
unsigned short var_13 = (unsigned short)25375;
int var_14 = -1745296779;
unsigned short var_15 = (unsigned short)23693;
short var_16 = (short)-12442;
long long int var_17 = 5889774702972185341LL;
int var_18 = 461993516;
int var_19 = 642629662;
short var_20 = (short)-9688;
unsigned short var_21 = (unsigned short)28307;
unsigned short var_22 = (unsigned short)45460;
short var_23 = (short)-10667;
signed char var_24 = (signed char)-52;
short var_25 = (short)12982;
unsigned long long int var_26 = 3256185495104315022ULL;
short var_27 = (short)-26272;
int arr_0 [25] ;
unsigned char arr_1 [25] ;
short arr_2 [25] [25] ;
signed char arr_4 [25] ;
int arr_9 [25] ;
signed char arr_11 [18] ;
short arr_13 [18] ;
short arr_14 [18] ;
unsigned short arr_16 [18] ;
short arr_18 [18] ;
short arr_22 [18] [18] [18] ;
short arr_26 [18] [18] ;
unsigned short arr_30 [18] ;
unsigned char arr_5 [25] [25] ;
unsigned char arr_6 [25] [25] ;
unsigned short arr_10 [25] ;
unsigned short arr_15 [18] ;
unsigned long long int arr_21 [18] [18] ;
signed char arr_24 [18] [18] [18] ;
short arr_27 [18] [18] ;
signed char arr_28 [18] [18] ;
unsigned char arr_29 [18] ;
int arr_32 [18] ;
unsigned short arr_33 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 1621287837;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = (unsigned char)151;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-2602;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (signed char)125;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = 188200231;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_13 [i_0] = (short)17558;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_14 [i_0] = (short)14653;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_16 [i_0] = (unsigned short)41609;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_18 [i_0] = (short)-11373;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = (short)-41;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_26 [i_0] [i_1] = (short)9307;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_30 [i_0] = (unsigned short)63457;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned char)112;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_10 [i_0] = (unsigned short)13245;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_15 [i_0] = (unsigned short)17048;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? 3614012278624981316ULL : 17389638900330856849ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-107 : (signed char)-76;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_27 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-6531 : (short)20089;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_28 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)124 : (signed char)-8;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (unsigned char)110 : (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_32 [i_0] = -1703015424;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_33 [i_0] [i_1] = (unsigned short)19823;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_21 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_27 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_28 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_29 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_32 [i_0] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
