#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12904673096551117538ULL;
unsigned long long int var_3 = 9638083572170184133ULL;
unsigned int var_4 = 1264710731U;
short var_5 = (short)-18907;
short var_6 = (short)-17826;
signed char var_7 = (signed char)-43;
long long int var_8 = 3214124351240111087LL;
unsigned long long int var_9 = 9974583682776179435ULL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)7459;
signed char var_13 = (signed char)-2;
unsigned int var_14 = 1569320152U;
unsigned char var_15 = (unsigned char)164;
unsigned short var_16 = (unsigned short)26606;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)157;
int zero = 0;
short var_19 = (short)29800;
short var_20 = (short)19528;
unsigned long long int var_21 = 15011284173540648919ULL;
unsigned long long int var_22 = 5696252737541217619ULL;
short var_23 = (short)-17481;
signed char var_24 = (signed char)-53;
unsigned short var_25 = (unsigned short)58407;
long long int var_26 = -4805022482215192187LL;
signed char var_27 = (signed char)28;
long long int var_28 = 2531966533054813208LL;
unsigned int var_29 = 3394557432U;
unsigned int var_30 = 2451872942U;
unsigned short var_31 = (unsigned short)51152;
short var_32 = (short)-16515;
long long int var_33 = 5400589750194224344LL;
short var_34 = (short)-27276;
_Bool var_35 = (_Bool)1;
unsigned int var_36 = 1890844401U;
long long int var_37 = -2448427632214094578LL;
_Bool var_38 = (_Bool)1;
int var_39 = -1587275315;
long long int var_40 = -802431237990353753LL;
unsigned int var_41 = 1916965818U;
unsigned int var_42 = 3801159665U;
unsigned long long int var_43 = 6809107976417118782ULL;
unsigned int var_44 = 2397021869U;
short var_45 = (short)12356;
int var_46 = -999201764;
unsigned char arr_0 [15] [15] ;
int arr_4 [15] [15] [15] ;
unsigned short arr_5 [15] [15] ;
signed char arr_7 [15] [15] [15] [15] ;
unsigned long long int arr_8 [15] [15] [15] ;
unsigned short arr_9 [15] ;
unsigned long long int arr_10 [15] [15] [15] [15] ;
signed char arr_11 [15] [15] [15] ;
unsigned int arr_13 [15] [15] [15] [15] ;
long long int arr_15 [15] [15] [15] ;
signed char arr_21 [15] [15] [15] ;
unsigned long long int arr_23 [15] [15] [15] [15] [15] ;
long long int arr_24 [15] [15] [15] [15] ;
signed char arr_25 [15] [15] [15] [15] ;
unsigned char arr_32 [15] [15] [15] [15] ;
int arr_35 [16] ;
unsigned char arr_36 [16] ;
short arr_39 [16] ;
int arr_40 [16] ;
unsigned short arr_12 [15] [15] [15] [15] ;
_Bool arr_17 [15] [15] [15] ;
unsigned char arr_26 [15] [15] [15] [15] ;
long long int arr_29 [15] [15] [15] ;
unsigned long long int arr_37 [16] ;
_Bool arr_41 [16] ;
unsigned long long int arr_42 [16] ;
unsigned long long int arr_46 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = -315957826;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)18282;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (signed char)127 : (signed char)74;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = 8684592742845785211ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = (unsigned short)36674;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 11137813581835447546ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)52 : (signed char)49;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_13 [i_0] [i_1] [i_2] [i_3] = 2885795053U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 5184922714705100338LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_21 [i_0] [i_1] [i_2] = (signed char)28;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = 7657780092672235762ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = -8764429997361689360LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (signed char)-122;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (unsigned char)42;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_35 [i_0] = 2059456779;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_36 [i_0] = (unsigned char)148;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_39 [i_0] = (short)518;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_40 [i_0] = -1595051649;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)8300 : (unsigned short)20291;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (unsigned char)248;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = -610110749270352414LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_37 [i_0] = 10791254317459891455ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_41 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_42 [i_0] = 11979757286884767140ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_46 [i_0] = 16650651315150634295ULL;
}

void checksum() {
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
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
    hash(&seed, var_43);
    hash(&seed, var_44);
    hash(&seed, var_45);
    hash(&seed, var_46);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_12 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_29 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_41 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_42 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_46 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
