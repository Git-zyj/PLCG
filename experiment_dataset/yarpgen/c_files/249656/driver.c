#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -550175154;
signed char var_2 = (signed char)-112;
_Bool var_3 = (_Bool)0;
unsigned long long int var_4 = 707497833925147341ULL;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 1975869278688219521ULL;
unsigned long long int var_8 = 9911876645491214987ULL;
unsigned char var_11 = (unsigned char)80;
short var_12 = (short)-5818;
_Bool var_13 = (_Bool)0;
signed char var_15 = (signed char)-29;
short var_16 = (short)11728;
short var_17 = (short)20100;
int zero = 0;
unsigned char var_18 = (unsigned char)176;
short var_19 = (short)22984;
short var_20 = (short)23983;
int var_21 = 904923225;
signed char var_22 = (signed char)52;
signed char var_23 = (signed char)-19;
unsigned char var_24 = (unsigned char)132;
int var_25 = 339437962;
unsigned long long int var_26 = 15354792078901882294ULL;
short var_27 = (short)4932;
int var_28 = -937238434;
short var_29 = (short)22847;
int var_30 = -1222791735;
unsigned long long int var_31 = 10348791065009269937ULL;
unsigned char var_32 = (unsigned char)162;
short var_33 = (short)-32573;
unsigned short arr_3 [16] ;
short arr_4 [24] ;
unsigned char arr_14 [11] [11] [11] ;
int arr_19 [22] [22] ;
long long int arr_7 [24] ;
short arr_16 [11] [11] ;
_Bool arr_20 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (unsigned short)50047;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)8308;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_19 [i_0] [i_1] = 284296229;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 5702092824581675084LL : -4904013532405166166LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = (short)-26008;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_20 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)1 : (_Bool)0;
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
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_20 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
