#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)127;
_Bool var_1 = (_Bool)1;
long long int var_3 = -5782533205993088076LL;
unsigned int var_5 = 3241941068U;
unsigned short var_6 = (unsigned short)3388;
unsigned char var_7 = (unsigned char)55;
_Bool var_8 = (_Bool)0;
unsigned int var_9 = 4224641427U;
_Bool var_10 = (_Bool)0;
short var_11 = (short)24590;
_Bool var_12 = (_Bool)0;
long long int var_13 = -5950257448989382372LL;
unsigned long long int var_14 = 1181156499961315989ULL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)11644;
long long int var_17 = -2987329646438040248LL;
short var_18 = (short)-27792;
_Bool var_19 = (_Bool)1;
int zero = 0;
signed char var_20 = (signed char)-103;
unsigned short var_21 = (unsigned short)12824;
short var_22 = (short)31775;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)40;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 3364418141U;
long long int var_27 = -2555369420786734209LL;
unsigned short var_28 = (unsigned short)35121;
int var_29 = -1858233409;
unsigned long long int var_30 = 9962057327842617248ULL;
unsigned short var_31 = (unsigned short)31256;
signed char var_32 = (signed char)81;
unsigned short var_33 = (unsigned short)46882;
unsigned int var_34 = 2911907443U;
long long int var_35 = 5829842796405406198LL;
unsigned short var_36 = (unsigned short)36611;
unsigned long long int var_37 = 2792997074864014737ULL;
signed char var_38 = (signed char)-2;
unsigned int var_39 = 1876621341U;
_Bool var_40 = (_Bool)0;
unsigned int var_41 = 2992168491U;
_Bool var_42 = (_Bool)1;
_Bool var_43 = (_Bool)0;
long long int var_44 = -9090522732653916501LL;
unsigned int var_45 = 480804440U;
unsigned int var_46 = 2319497910U;
unsigned int var_47 = 3260779538U;
unsigned long long int var_48 = 6696687760128159698ULL;
signed char var_49 = (signed char)-114;
int var_50 = -1195179074;
int var_51 = 409604601;
long long int arr_0 [12] [12] ;
signed char arr_1 [12] ;
unsigned int arr_3 [12] [12] ;
unsigned int arr_4 [12] ;
signed char arr_5 [12] ;
unsigned short arr_6 [12] ;
unsigned char arr_8 [12] [12] [12] ;
unsigned int arr_9 [12] ;
long long int arr_10 [12] [12] [12] ;
unsigned char arr_11 [12] ;
long long int arr_12 [12] [12] [12] [12] ;
_Bool arr_13 [12] ;
short arr_14 [12] [12] ;
unsigned short arr_15 [12] [12] [12] ;
unsigned int arr_18 [12] ;
unsigned int arr_19 [12] ;
signed char arr_23 [12] [12] [12] [12] [12] ;
unsigned short arr_24 [12] [12] [12] [12] ;
int arr_28 [12] [12] ;
int arr_29 [12] [12] [12] ;
long long int arr_31 [12] [12] ;
signed char arr_32 [12] ;
long long int arr_34 [12] [12] [12] ;
long long int arr_35 [12] [12] [12] ;
unsigned char arr_37 [12] ;
long long int arr_39 [12] [12] [12] [12] [12] ;
unsigned char arr_40 [12] [12] [12] [12] ;
unsigned short arr_41 [12] [12] [12] [12] [12] ;
unsigned short arr_42 [12] [12] [12] [12] [12] [12] [12] ;
signed char arr_43 [12] [12] [12] [12] ;
long long int arr_50 [12] ;
unsigned short arr_53 [12] [12] ;
long long int arr_64 [16] ;
long long int arr_65 [16] ;
short arr_66 [16] [16] ;
_Bool arr_2 [12] [12] ;
_Bool arr_17 [12] [12] [12] ;
long long int arr_20 [12] [12] [12] [12] ;
long long int arr_26 [12] [12] [12] [12] [12] ;
_Bool arr_33 [12] [12] [12] ;
_Bool arr_47 [12] [12] [12] ;
long long int arr_48 [12] ;
long long int arr_49 [12] ;
signed char arr_54 [12] ;
long long int arr_59 [12] [12] ;
unsigned char arr_62 [12] ;
long long int arr_63 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = -3453622092082292254LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = 2470933354U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 4089240298U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (unsigned short)61382;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = 1670353755U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -2371467123368391622LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_11 [i_0] = (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = -990207991202308452LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_13 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = (short)-31422;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned short)3940;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_18 [i_0] = 43837635U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = 2488971531U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-78;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = (unsigned short)43407;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_28 [i_0] [i_1] = -1382357415;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = -70037256;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_31 [i_0] [i_1] = 6017406151776870544LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_32 [i_0] = (signed char)-127;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_34 [i_0] [i_1] [i_2] = -5201740798913673247LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_35 [i_0] [i_1] [i_2] = 6034375853296784904LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_37 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] = 526093553147098734LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_40 [i_0] [i_1] [i_2] [i_3] = (unsigned char)241;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_41 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)45579;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_42 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)54761;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_43 [i_0] [i_1] [i_2] [i_3] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_50 [i_0] = 5431147777228525172LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_53 [i_0] [i_1] = (unsigned short)15564;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_64 [i_0] = 1716478210071559458LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_65 [i_0] = -7533416358013670170LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_66 [i_0] [i_1] = (short)-28061;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 1142206172989197664LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] = 5692056665155718857LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_48 [i_0] = 3938982519975243451LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_49 [i_0] = -4755611064676945695LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_54 [i_0] = (signed char)83;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_59 [i_0] [i_1] = -441942357167978604LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_62 [i_0] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_63 [i_0] = -1712821293152150320LL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_17 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_33 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_47 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_48 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_49 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_54 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_59 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_62 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_63 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
