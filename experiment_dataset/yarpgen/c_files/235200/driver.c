#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)162;
unsigned short var_1 = (unsigned short)48754;
unsigned char var_6 = (unsigned char)164;
signed char var_8 = (signed char)-11;
unsigned char var_11 = (unsigned char)152;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)16;
int zero = 0;
unsigned char var_16 = (unsigned char)168;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)51541;
int var_19 = 225041350;
unsigned long long int var_20 = 7230098461721970982ULL;
unsigned short var_21 = (unsigned short)18504;
unsigned long long int var_22 = 2093471487974795110ULL;
unsigned long long int var_23 = 2640413397917512126ULL;
signed char var_24 = (signed char)-26;
short var_25 = (short)-2168;
int var_26 = -1563239078;
unsigned short var_27 = (unsigned short)27272;
unsigned char var_28 = (unsigned char)40;
unsigned char var_29 = (unsigned char)133;
unsigned short var_30 = (unsigned short)2888;
unsigned char var_31 = (unsigned char)122;
long long int var_32 = -1831433302857345176LL;
_Bool var_33 = (_Bool)1;
signed char var_34 = (signed char)-52;
signed char var_35 = (signed char)-57;
unsigned short var_36 = (unsigned short)47037;
signed char var_37 = (signed char)73;
int var_38 = 881780052;
unsigned short arr_2 [22] [22] ;
unsigned char arr_3 [22] ;
unsigned char arr_4 [22] ;
unsigned char arr_5 [22] [22] [22] ;
unsigned char arr_6 [22] [22] [22] [22] ;
short arr_9 [22] [22] [22] [22] ;
unsigned short arr_10 [22] [22] [22] [22] [22] ;
unsigned char arr_13 [22] [22] [22] [22] ;
signed char arr_15 [22] [22] [22] [22] ;
unsigned char arr_18 [15] ;
unsigned short arr_19 [15] ;
long long int arr_21 [15] ;
unsigned long long int arr_25 [13] ;
unsigned short arr_31 [13] ;
signed char arr_38 [13] ;
unsigned long long int arr_36 [13] ;
unsigned short arr_41 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)30671;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (unsigned char)144;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned char)23;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)198;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (short)20690;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)29019;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (signed char)39;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_18 [i_0] = (unsigned char)246;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = (unsigned short)53491;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_21 [i_0] = -8179451997099118672LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_25 [i_0] = 16965619031030906626ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_31 [i_0] = (unsigned short)40947;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_38 [i_0] = (signed char)-4;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_36 [i_0] = 1527978885007327763ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_41 [i_0] [i_1] [i_2] = (unsigned short)35377;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_41 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
