#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_1 = -2690841823992173962LL;
long long int var_2 = 7351629690511834026LL;
signed char var_4 = (signed char)54;
unsigned long long int var_6 = 14798638429476756895ULL;
short var_7 = (short)-6657;
unsigned long long int var_8 = 16878204216636455891ULL;
_Bool var_9 = (_Bool)0;
short var_13 = (short)1105;
short var_14 = (short)2538;
long long int var_15 = -8381181582280875125LL;
unsigned int var_16 = 3218109530U;
int zero = 0;
unsigned long long int var_18 = 8049301452427327780ULL;
short var_19 = (short)-31534;
long long int var_20 = 7950208161862686799LL;
unsigned int var_21 = 2892542008U;
unsigned int var_22 = 3187061289U;
_Bool var_23 = (_Bool)0;
short var_24 = (short)-27105;
unsigned long long int var_25 = 2660837689586011195ULL;
short var_26 = (short)27966;
unsigned long long int var_27 = 7913558879727841753ULL;
long long int var_28 = 4719095596953077746LL;
unsigned int var_29 = 1915317303U;
unsigned char var_30 = (unsigned char)21;
unsigned int var_31 = 141855997U;
unsigned short var_32 = (unsigned short)34139;
unsigned char var_33 = (unsigned char)37;
_Bool var_34 = (_Bool)0;
unsigned int var_35 = 1061792621U;
unsigned char var_36 = (unsigned char)129;
int var_37 = -1180224009;
int var_38 = -1214928761;
int var_39 = 67481448;
unsigned short var_40 = (unsigned short)25626;
int var_41 = -1589983669;
unsigned long long int var_42 = 16766384090500383763ULL;
unsigned char var_43 = (unsigned char)248;
signed char var_44 = (signed char)-89;
short var_45 = (short)-16049;
_Bool var_46 = (_Bool)1;
unsigned int var_47 = 4036765831U;
long long int var_48 = -6095366798737473710LL;
_Bool var_49 = (_Bool)0;
unsigned int var_50 = 1749486015U;
unsigned char var_51 = (unsigned char)222;
unsigned long long int var_52 = 10670645214995441466ULL;
unsigned short var_53 = (unsigned short)39998;
_Bool var_54 = (_Bool)0;
short var_55 = (short)21331;
long long int var_56 = -6009539940680734328LL;
unsigned int var_57 = 1701530416U;
unsigned long long int var_58 = 2922252662669462830ULL;
signed char arr_0 [18] ;
_Bool arr_1 [18] ;
_Bool arr_2 [18] ;
_Bool arr_3 [18] [18] ;
_Bool arr_4 [18] ;
_Bool arr_5 [18] [18] [18] ;
short arr_6 [18] [18] [18] ;
unsigned char arr_8 [18] ;
unsigned int arr_10 [18] [18] [18] [18] ;
short arr_14 [18] [18] [18] ;
unsigned long long int arr_15 [18] [18] [18] [18] [18] ;
unsigned long long int arr_16 [18] [18] ;
long long int arr_18 [18] [18] ;
signed char arr_19 [18] [18] ;
long long int arr_20 [18] ;
unsigned short arr_21 [18] ;
unsigned int arr_22 [18] [18] ;
int arr_24 [18] [18] [18] [18] ;
unsigned long long int arr_27 [18] [18] [18] [18] [18] ;
unsigned long long int arr_31 [18] [18] [18] [18] ;
signed char arr_33 [18] [18] [18] [18] [18] ;
signed char arr_34 [18] [18] [18] [18] ;
int arr_36 [18] ;
unsigned long long int arr_42 [18] ;
unsigned int arr_45 [18] ;
unsigned long long int arr_46 [18] [18] [18] ;
int arr_7 [18] [18] [18] ;
unsigned char arr_23 [18] [18] ;
short arr_30 [18] [18] [18] ;
int arr_51 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (short)-28217;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_8 [i_0] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = 1637591599U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-8968 : (short)-25198;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = 14366145905710769574ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_16 [i_0] [i_1] = 11499408222433648371ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? -3316528049249637106LL : -3347401956561861995LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)-99;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_20 [i_0] = 3840202236748793974LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? (unsigned short)60035 : (unsigned short)17638;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = 70051492U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? -2034450382 : -826611629;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_27 [i_0] [i_1] [i_2] [i_3] [i_4] = 17584731311165809064ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 6852902780190465538ULL : 6489744390699494695ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_33 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)51;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_34 [i_0] [i_1] [i_2] [i_3] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_36 [i_0] = 1861812636;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_42 [i_0] = 7840401515723521959ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_45 [i_0] = 2417666426U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = 1335352715413358934ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -949928192 : 647610388;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_23 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)107 : (unsigned char)21;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-5460 : (short)-10916;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_51 [i_0] = (i_0 % 2 == 0) ? 376833893 : 260665982;
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
    hash(&seed, var_47);
    hash(&seed, var_48);
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
    hash(&seed, var_56);
    hash(&seed, var_57);
    hash(&seed, var_58);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_23 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_51 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
