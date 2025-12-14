#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)84;
long long int var_5 = -3664582532610653225LL;
long long int var_6 = 6007490085498657991LL;
long long int var_8 = -985260114010202244LL;
long long int var_9 = -8570346610037461102LL;
unsigned int var_10 = 3776999053U;
int var_11 = 1450417191;
long long int var_12 = 2636134022298754657LL;
unsigned short var_13 = (unsigned short)14528;
unsigned short var_14 = (unsigned short)1889;
long long int var_15 = 183942471909021333LL;
unsigned short var_16 = (unsigned short)52804;
long long int var_17 = 6247474832435062989LL;
int zero = 0;
signed char var_18 = (signed char)91;
unsigned int var_19 = 168407266U;
unsigned long long int var_20 = 1077216166921240075ULL;
unsigned int var_21 = 1506444223U;
unsigned short var_22 = (unsigned short)10517;
long long int var_23 = 4076024075274431130LL;
unsigned int var_24 = 262501877U;
int var_25 = 1331956808;
unsigned short var_26 = (unsigned short)32137;
long long int var_27 = 2055060312158133586LL;
unsigned short var_28 = (unsigned short)16995;
long long int var_29 = 3814669623533384538LL;
signed char var_30 = (signed char)-19;
unsigned int var_31 = 2681520564U;
unsigned short arr_0 [16] ;
unsigned short arr_1 [16] ;
signed char arr_3 [11] [11] ;
unsigned char arr_5 [11] ;
unsigned char arr_6 [11] ;
unsigned long long int arr_8 [13] ;
unsigned short arr_9 [13] [13] ;
unsigned short arr_14 [13] ;
unsigned int arr_15 [13] [13] [13] ;
long long int arr_16 [13] [13] [13] ;
unsigned char arr_18 [13] [13] [13] [13] ;
long long int arr_24 [13] ;
int arr_25 [13] [13] ;
signed char arr_28 [13] [13] [13] ;
unsigned int arr_29 [13] [13] ;
int arr_2 [16] ;
unsigned short arr_7 [11] ;
int arr_10 [13] [13] ;
unsigned long long int arr_11 [13] ;
signed char arr_12 [13] ;
unsigned char arr_19 [13] [13] ;
int arr_23 [13] [13] [13] ;
unsigned int arr_27 [13] [13] [13] ;
signed char arr_30 [13] [13] [13] [13] ;
unsigned int arr_31 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned short)54832;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)3663;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)99;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_8 [i_0] = 9653926176693904061ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)25486;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_14 [i_0] = (unsigned short)21145;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 2788322131U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 6780826667313266273LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (unsigned char)107 : (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_24 [i_0] = -8124142567290406165LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_25 [i_0] [i_1] = -1439215392;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (signed char)127;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_29 [i_0] [i_1] = 1195669840U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 353329249;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = (unsigned short)38318;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_10 [i_0] [i_1] = -824314680;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = 14354567740634191035ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_12 [i_0] = (signed char)-54;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_19 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)67 : (unsigned char)164;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 1591240203;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 2420732757U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (signed char)-74;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = 2875176181U;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_19 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
