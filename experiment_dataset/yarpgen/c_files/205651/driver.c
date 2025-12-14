#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_3 = -1462990483;
unsigned long long int var_5 = 18389159728313717249ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_9 = (unsigned short)30549;
unsigned int var_10 = 3293327594U;
unsigned char var_11 = (unsigned char)191;
unsigned long long int var_12 = 843229655650388ULL;
unsigned short var_13 = (unsigned short)6884;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1457820424U;
short var_16 = (short)-18040;
unsigned long long int var_17 = 3574554959649169213ULL;
int zero = 0;
unsigned int var_18 = 255507922U;
unsigned char var_19 = (unsigned char)1;
unsigned short var_20 = (unsigned short)1622;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2837728068U;
short var_23 = (short)-19002;
unsigned long long int var_24 = 12407706567992143981ULL;
unsigned short var_25 = (unsigned short)32499;
unsigned int var_26 = 705130312U;
unsigned char var_27 = (unsigned char)198;
unsigned char var_28 = (unsigned char)120;
unsigned char var_29 = (unsigned char)79;
unsigned int var_30 = 2458125473U;
_Bool var_31 = (_Bool)1;
unsigned short var_32 = (unsigned short)53830;
short var_33 = (short)10669;
unsigned long long int var_34 = 17302324478925035378ULL;
unsigned short var_35 = (unsigned short)23933;
unsigned long long int var_36 = 15565446629412298311ULL;
unsigned long long int var_37 = 7650357885125345065ULL;
signed char var_38 = (signed char)83;
unsigned long long int var_39 = 13243764511822215524ULL;
int var_40 = -9988425;
unsigned long long int var_41 = 16725708061287912421ULL;
unsigned char var_42 = (unsigned char)76;
unsigned short var_43 = (unsigned short)53258;
int var_44 = -572584905;
unsigned char var_45 = (unsigned char)32;
unsigned int var_46 = 2593842253U;
short var_47 = (short)-8158;
int var_48 = 1649202882;
unsigned long long int var_49 = 12159456008749468406ULL;
short var_50 = (short)-12244;
unsigned short var_51 = (unsigned short)54044;
unsigned long long int var_52 = 2520166524348068946ULL;
int arr_1 [12] ;
int arr_2 [12] [12] [12] ;
unsigned char arr_3 [12] ;
int arr_8 [12] [12] [12] [12] ;
long long int arr_9 [12] [12] [12] ;
unsigned char arr_11 [12] [12] ;
unsigned int arr_14 [12] [12] [12] [12] [12] [12] ;
_Bool arr_16 [12] [12] [12] [12] [12] [12] ;
unsigned char arr_37 [12] [12] [12] ;
unsigned short arr_44 [12] [12] [12] [12] [12] ;
unsigned int arr_30 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 319202720;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = -1536338604;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)3;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = 1645207714;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = -8335694581728128474LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)119 : (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1629833063U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)144 : (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_44 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)55798;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_30 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 1304008541U : 3581752952U;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_30 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
