#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)56776;
long long int var_1 = -5955563349836504862LL;
unsigned char var_2 = (unsigned char)183;
signed char var_3 = (signed char)9;
unsigned short var_4 = (unsigned short)14327;
signed char var_5 = (signed char)65;
int var_6 = -1160774206;
signed char var_7 = (signed char)-79;
unsigned int var_8 = 1729742426U;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)5;
unsigned short var_11 = (unsigned short)64397;
_Bool var_12 = (_Bool)0;
long long int var_13 = -5237525651999698569LL;
unsigned char var_14 = (unsigned char)83;
unsigned int var_15 = 3515129551U;
signed char var_17 = (signed char)70;
_Bool var_18 = (_Bool)0;
long long int var_19 = 5859281475252507224LL;
int zero = 0;
signed char var_20 = (signed char)118;
unsigned int var_21 = 864843432U;
long long int var_22 = 3238955766538212127LL;
short var_23 = (short)-384;
unsigned short var_24 = (unsigned short)49927;
long long int var_25 = 6025857411105983307LL;
unsigned int var_26 = 1841856165U;
unsigned short var_27 = (unsigned short)27664;
unsigned int var_28 = 1758544026U;
long long int var_29 = 802614589485286570LL;
unsigned long long int var_30 = 17880299388818330998ULL;
signed char var_31 = (signed char)62;
signed char var_32 = (signed char)-107;
unsigned short var_33 = (unsigned short)37719;
unsigned char var_34 = (unsigned char)140;
unsigned short var_35 = (unsigned short)23574;
signed char var_36 = (signed char)-44;
signed char var_37 = (signed char)93;
long long int var_38 = 1745082528902090280LL;
unsigned long long int var_39 = 14218109358438298343ULL;
short var_40 = (short)23750;
unsigned short var_41 = (unsigned short)25128;
unsigned int var_42 = 2849709020U;
signed char var_43 = (signed char)118;
unsigned short var_44 = (unsigned short)10877;
long long int arr_0 [24] ;
unsigned short arr_1 [24] ;
_Bool arr_2 [24] ;
signed char arr_3 [24] [24] ;
unsigned char arr_4 [24] [24] ;
unsigned short arr_5 [24] [24] ;
unsigned char arr_7 [22] ;
_Bool arr_8 [22] ;
unsigned short arr_11 [17] ;
signed char arr_12 [17] ;
_Bool arr_13 [17] [17] [17] ;
unsigned int arr_17 [17] [17] [17] [17] ;
signed char arr_19 [17] [17] ;
long long int arr_20 [17] [17] [17] [17] ;
long long int arr_21 [17] [17] [17] [17] ;
unsigned short arr_22 [17] [17] [17] [17] [17] [17] ;
unsigned char arr_23 [17] ;
signed char arr_26 [17] [17] [17] [17] ;
unsigned short arr_28 [17] [17] [17] [17] ;
unsigned long long int arr_30 [17] [17] ;
unsigned long long int arr_39 [21] [21] [21] ;
short arr_6 [24] [24] ;
unsigned char arr_15 [17] [17] ;
unsigned char arr_16 [17] [17] [17] ;
unsigned int arr_29 [17] [17] [17] [17] [17] [17] ;
signed char arr_47 [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -1194216595676324340LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned short)20370;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-117;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)55727;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (unsigned short)60161;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = 1748742189U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_19 [i_0] [i_1] = (signed char)38;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = -8696968574814455980LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = -8292139145848075159LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? (unsigned short)9533 : (unsigned short)36448;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_23 [i_0] = (unsigned char)116;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (signed char)104 : (signed char)120;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (unsigned short)25121 : (unsigned short)26873;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_30 [i_0] [i_1] = (i_0 % 2 == 0) ? 5961021441092883421ULL : 8961823444866430100ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = 8940454780945291159ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (short)32108;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)10 : (unsigned char)184;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)248 : (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_2 % 2 == 0) ? 2563707574U : 3300649722U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_47 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)109 : (signed char)10;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_16 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 17; ++i_5) 
                            hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
