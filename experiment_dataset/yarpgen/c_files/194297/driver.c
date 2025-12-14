#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)28050;
unsigned short var_3 = (unsigned short)54990;
unsigned char var_5 = (unsigned char)252;
unsigned long long int var_6 = 16573289596990929973ULL;
signed char var_8 = (signed char)70;
long long int var_9 = -108267494274505064LL;
short var_11 = (short)-9019;
unsigned char var_12 = (unsigned char)212;
unsigned int var_13 = 299915892U;
unsigned char var_16 = (unsigned char)61;
unsigned char var_17 = (unsigned char)81;
unsigned short var_19 = (unsigned short)43584;
int zero = 0;
unsigned char var_20 = (unsigned char)73;
unsigned long long int var_21 = 15933494578186154444ULL;
unsigned short var_22 = (unsigned short)30145;
long long int var_23 = -283620231476586501LL;
unsigned char var_24 = (unsigned char)84;
unsigned char var_25 = (unsigned char)74;
long long int var_26 = -6736953081918733942LL;
unsigned char var_27 = (unsigned char)128;
_Bool var_28 = (_Bool)0;
_Bool var_29 = (_Bool)0;
_Bool var_30 = (_Bool)0;
unsigned long long int var_31 = 16851998212893771979ULL;
int var_32 = -181042288;
signed char var_33 = (signed char)-69;
_Bool var_34 = (_Bool)1;
int var_35 = -776626569;
unsigned char var_36 = (unsigned char)120;
unsigned int var_37 = 1915079383U;
signed char var_38 = (signed char)-119;
unsigned short var_39 = (unsigned short)17331;
unsigned long long int var_40 = 16329527893136510072ULL;
unsigned long long int var_41 = 2119735948174988172ULL;
short var_42 = (short)-5560;
_Bool var_43 = (_Bool)0;
int var_44 = 1966964432;
long long int var_45 = -2051379204906975964LL;
unsigned short var_46 = (unsigned short)24433;
int var_47 = 2133482227;
long long int var_48 = -1647806381958984229LL;
long long int var_49 = -919192503528942105LL;
long long int var_50 = 2474411765739888049LL;
unsigned char var_51 = (unsigned char)251;
int var_52 = 154490821;
_Bool var_53 = (_Bool)1;
unsigned long long int var_54 = 7246218109517846356ULL;
unsigned short var_55 = (unsigned short)18039;
unsigned short var_56 = (unsigned short)62921;
unsigned char var_57 = (unsigned char)141;
unsigned short var_58 = (unsigned short)42045;
int var_59 = -1224163609;
short var_60 = (short)24845;
short var_61 = (short)-4186;
long long int var_62 = 1325093131566259462LL;
unsigned long long int var_63 = 9523223423857605522ULL;
unsigned long long int arr_0 [12] [12] ;
long long int arr_2 [13] [13] ;
unsigned long long int arr_3 [13] ;
signed char arr_4 [13] [13] [13] ;
unsigned char arr_5 [13] ;
int arr_6 [13] [13] [13] [13] ;
signed char arr_7 [13] [13] [13] ;
unsigned char arr_8 [13] [13] [13] [13] ;
int arr_9 [13] [13] [13] [13] ;
signed char arr_10 [13] [13] [13] ;
unsigned short arr_11 [13] [13] [13] [13] ;
long long int arr_14 [13] [13] [13] [13] [13] ;
unsigned short arr_16 [13] ;
unsigned short arr_23 [15] ;
int arr_25 [16] ;
unsigned long long int arr_28 [16] ;
short arr_29 [16] [16] [16] ;
long long int arr_30 [16] ;
long long int arr_38 [16] [16] [16] [16] [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = 17219857732043187249ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = -6567641263296737797LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = 12934198924348372671ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (unsigned char)106;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 650106850;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-55;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 1329447662;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)4208 : (unsigned short)50102;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = 8136274031859708420LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (unsigned short)42268;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_23 [i_0] = (unsigned short)25818;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_25 [i_0] = -1724903041;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 17169873085047736881ULL : 18170398543295416158ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_29 [i_0] [i_1] [i_2] = (short)-13213;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_30 [i_0] = -3484029977226990129LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 16; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 16; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 16; ++i_6) 
                                arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? 310976449126158412LL : -8589413111065679017LL;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
