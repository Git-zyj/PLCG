#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -415433774;
long long int var_1 = -8574733696027310074LL;
short var_2 = (short)3142;
signed char var_3 = (signed char)60;
int var_4 = 1943254947;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)2167;
short var_7 = (short)-18125;
unsigned char var_8 = (unsigned char)109;
int var_9 = -845994366;
unsigned long long int var_10 = 6385062003319694543ULL;
unsigned long long int var_11 = 10510023668906452819ULL;
short var_13 = (short)9230;
unsigned short var_14 = (unsigned short)47558;
int zero = 0;
unsigned int var_15 = 3191353202U;
unsigned int var_16 = 4127731357U;
short var_17 = (short)-20020;
unsigned int var_18 = 4205106023U;
unsigned int var_19 = 2216743969U;
int var_20 = 1590937108;
unsigned int var_21 = 1408833137U;
unsigned long long int var_22 = 7055905617436303344ULL;
unsigned int var_23 = 270213999U;
unsigned char var_24 = (unsigned char)189;
signed char var_25 = (signed char)-110;
_Bool var_26 = (_Bool)0;
signed char var_27 = (signed char)93;
unsigned long long int var_28 = 7479069470245244912ULL;
int var_29 = 1657524387;
int var_30 = 877619022;
long long int var_31 = 2545490186140574936LL;
unsigned short var_32 = (unsigned short)63993;
_Bool var_33 = (_Bool)1;
unsigned long long int var_34 = 5222299752345223701ULL;
unsigned long long int var_35 = 1998773950349015803ULL;
_Bool var_36 = (_Bool)0;
_Bool var_37 = (_Bool)0;
int var_38 = -169571583;
signed char var_39 = (signed char)105;
unsigned char var_40 = (unsigned char)17;
unsigned int var_41 = 3448987864U;
unsigned char var_42 = (unsigned char)236;
int var_43 = -437419091;
short var_44 = (short)7823;
unsigned char var_45 = (unsigned char)236;
unsigned char var_46 = (unsigned char)82;
unsigned char var_47 = (unsigned char)160;
long long int var_48 = -143964360233259604LL;
unsigned char var_49 = (unsigned char)223;
_Bool var_50 = (_Bool)0;
long long int var_51 = -5401305118060868933LL;
unsigned long long int var_52 = 8362616841403721729ULL;
unsigned int var_53 = 474491690U;
unsigned int var_54 = 71136021U;
_Bool var_55 = (_Bool)1;
_Bool var_56 = (_Bool)0;
signed char var_57 = (signed char)40;
short var_58 = (short)-6938;
long long int var_59 = -7364016004318049787LL;
_Bool var_60 = (_Bool)0;
int var_61 = -1044361819;
unsigned int var_62 = 3399348813U;
_Bool var_63 = (_Bool)1;
unsigned char arr_0 [16] [16] ;
_Bool arr_1 [16] ;
unsigned long long int arr_2 [16] [16] ;
short arr_3 [16] [16] ;
signed char arr_5 [15] ;
unsigned char arr_6 [15] [15] ;
unsigned int arr_8 [15] ;
long long int arr_11 [15] [15] [15] [15] ;
unsigned char arr_12 [15] [15] [15] [15] ;
short arr_13 [15] [15] [15] ;
short arr_14 [15] ;
unsigned int arr_15 [15] [15] [15] [15] [15] ;
long long int arr_20 [15] ;
long long int arr_21 [15] [15] [15] [15] ;
int arr_24 [15] [15] [15] [15] ;
signed char arr_34 [15] [15] ;
unsigned short arr_39 [15] [15] [15] [15] [15] [15] ;
unsigned int arr_43 [15] [15] [15] [15] [15] ;
long long int arr_45 [15] [15] [15] [15] [15] [15] [15] ;
int arr_56 [15] [15] ;
int arr_17 [15] [15] ;
unsigned char arr_18 [15] [15] [15] [15] ;
_Bool arr_30 [15] [15] [15] ;
signed char arr_51 [15] [15] [15] [15] ;
unsigned char arr_64 [15] [15] [15] ;
unsigned char arr_75 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)241 : (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (i_0 % 2 == 0) ? 13367937448693526033ULL : 12770587659548343114ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-23740 : (short)18380;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)84;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)163;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = 2514565768U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = -7137979826593213658LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)19 : (unsigned char)146;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (short)-21962;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_14 [i_0] = (short)-4461;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? 3017348825U : 3569483469U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_20 [i_0] = -3606303896151319833LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = -6177290810626443863LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = -726935490;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_34 [i_0] [i_1] = (signed char)120;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)9763;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        arr_43 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? 1190200201U : 2681346517U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 15; ++i_6) 
                                arr_45 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? -8345172395177639216LL : 436136736800461462LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_56 [i_0] [i_1] = (i_1 % 2 == 0) ? -803788037 : 1313584103;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (i_0 % 2 == 0) ? -2122693509 : 1528655393;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned char)251 : (unsigned char)94;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    arr_51 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)-76 : (signed char)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_64 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)72 : (unsigned char)26;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_75 [i_0] = (unsigned char)17;
}

void checksum() {
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
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_18 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    hash(&seed, arr_51 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_64 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_75 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
