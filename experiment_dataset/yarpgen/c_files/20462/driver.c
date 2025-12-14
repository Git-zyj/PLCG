#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2013015600;
unsigned short var_1 = (unsigned short)25102;
unsigned char var_2 = (unsigned char)226;
int var_3 = -1883889330;
unsigned int var_4 = 1203804837U;
short var_6 = (short)18627;
unsigned int var_7 = 701583798U;
unsigned int var_8 = 1366821008U;
unsigned int var_9 = 1640000037U;
int var_10 = -2116329669;
_Bool var_11 = (_Bool)0;
int var_12 = 1249226220;
long long int var_13 = -6995213024060648911LL;
signed char var_14 = (signed char)72;
unsigned char var_15 = (unsigned char)162;
short var_16 = (short)-10161;
int zero = 0;
signed char var_20 = (signed char)2;
_Bool var_21 = (_Bool)0;
long long int var_22 = 7818757933005751936LL;
_Bool var_23 = (_Bool)0;
unsigned long long int var_24 = 7033403101482217009ULL;
unsigned short var_25 = (unsigned short)39821;
signed char var_26 = (signed char)37;
unsigned int var_27 = 2426741233U;
unsigned char var_28 = (unsigned char)24;
signed char var_29 = (signed char)91;
unsigned short var_30 = (unsigned short)37774;
short var_31 = (short)25653;
long long int var_32 = 7873039058525259706LL;
int var_33 = -202625548;
unsigned int var_34 = 1166713497U;
int var_35 = 326215947;
int var_36 = 381771018;
_Bool var_37 = (_Bool)0;
_Bool var_38 = (_Bool)1;
long long int var_39 = 1131378818662036975LL;
unsigned long long int var_40 = 14708936816268195771ULL;
unsigned long long int var_41 = 2941066970086399314ULL;
unsigned short var_42 = (unsigned short)62449;
int var_43 = 552151486;
unsigned int var_44 = 1098936135U;
unsigned short var_45 = (unsigned short)58261;
signed char var_46 = (signed char)49;
unsigned long long int var_47 = 7633020625520779058ULL;
unsigned char var_48 = (unsigned char)49;
short var_49 = (short)-26864;
long long int var_50 = 5930388026391808073LL;
unsigned short var_51 = (unsigned short)28353;
short var_52 = (short)-30959;
unsigned int var_53 = 2604168334U;
signed char var_54 = (signed char)-30;
unsigned short var_55 = (unsigned short)43664;
unsigned char var_56 = (unsigned char)248;
unsigned int var_57 = 2026042766U;
short var_58 = (short)-809;
unsigned char var_59 = (unsigned char)19;
short var_60 = (short)-30016;
signed char var_61 = (signed char)-114;
unsigned short var_62 = (unsigned short)57080;
signed char var_63 = (signed char)-6;
_Bool var_64 = (_Bool)0;
unsigned long long int var_65 = 10159279078222584768ULL;
long long int var_66 = 5795198742849878071LL;
short var_67 = (short)-7805;
long long int var_68 = -5332242078570438013LL;
int var_69 = 1113235572;
unsigned short var_70 = (unsigned short)12578;
int var_71 = 246904950;
_Bool var_72 = (_Bool)1;
_Bool var_73 = (_Bool)0;
signed char arr_0 [12] ;
unsigned int arr_1 [12] ;
short arr_2 [12] [12] ;
unsigned short arr_3 [12] [12] ;
short arr_5 [12] ;
unsigned short arr_6 [24] [24] ;
unsigned short arr_7 [24] ;
unsigned char arr_9 [24] [24] ;
short arr_10 [24] ;
_Bool arr_11 [24] [24] ;
short arr_12 [24] [24] [24] [24] ;
signed char arr_13 [24] ;
unsigned short arr_14 [24] [24] ;
unsigned short arr_15 [24] [24] [24] [24] ;
_Bool arr_18 [24] [24] [24] [24] ;
unsigned int arr_22 [24] [24] [24] [24] [24] ;
signed char arr_23 [24] ;
unsigned int arr_24 [24] [24] [24] [24] ;
_Bool arr_25 [24] [24] ;
signed char arr_26 [24] [24] [24] ;
unsigned int arr_27 [24] [24] [24] ;
_Bool arr_29 [24] [24] ;
unsigned short arr_31 [24] [24] [24] ;
_Bool arr_33 [24] [24] [24] ;
unsigned int arr_35 [24] [24] ;
long long int arr_37 [24] [24] [24] [24] [24] ;
short arr_38 [24] [24] [24] [24] [24] [24] ;
unsigned short arr_39 [24] [24] [24] [24] ;
unsigned int arr_44 [24] [24] ;
unsigned char arr_48 [24] [24] ;
short arr_49 [24] [24] [24] [24] [24] ;
signed char arr_50 [24] [24] [24] [24] [24] [24] ;
unsigned char arr_66 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)-50;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2506791665U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (short)2273;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)905;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)-2493;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)11682;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = (unsigned short)40980;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned char)74;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (short)-22168;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = (short)-6342;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_13 [i_0] = (i_0 % 2 == 0) ? (signed char)-127 : (signed char)-24;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)27802;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_15 [i_0] [i_1] [i_2] [i_3] = (unsigned short)59857;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = 2906991724U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_23 [i_0] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = 581035066U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_25 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = (signed char)26;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = 2113836624U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_29 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (unsigned short)13190;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_33 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_35 [i_0] [i_1] = 509474952U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -7831264485790030219LL : 3590300013344943359LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_5 % 2 == 0) ? (short)-1047 : (short)-32374;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (unsigned short)35747;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_44 [i_0] [i_1] = 1307313895U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_48 [i_0] [i_1] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-26914;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_50 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_66 [i_0] [i_1] = (unsigned char)59;
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
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
    hash(&seed, var_69);
    hash(&seed, var_70);
    hash(&seed, var_71);
    hash(&seed, var_72);
    hash(&seed, var_73);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
