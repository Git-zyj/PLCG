#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2090754130;
int var_1 = -1488663602;
signed char var_2 = (signed char)120;
long long int var_3 = -600611744001789825LL;
int var_4 = 410421812;
unsigned short var_5 = (unsigned short)6826;
int var_6 = -532287657;
unsigned char var_7 = (unsigned char)176;
unsigned short var_8 = (unsigned short)1141;
signed char var_10 = (signed char)-124;
long long int var_11 = 1758821810875910982LL;
signed char var_12 = (signed char)87;
signed char var_13 = (signed char)-94;
unsigned short var_15 = (unsigned short)5593;
unsigned short var_16 = (unsigned short)58330;
int zero = 0;
unsigned long long int var_17 = 12971242843892860816ULL;
unsigned long long int var_18 = 576457925494440669ULL;
unsigned short var_19 = (unsigned short)45438;
unsigned char var_20 = (unsigned char)165;
long long int var_21 = -8393812594085879164LL;
unsigned short var_22 = (unsigned short)13350;
int var_23 = 347870271;
short var_24 = (short)29895;
unsigned long long int var_25 = 8458493074594929792ULL;
signed char var_26 = (signed char)45;
short var_27 = (short)-21083;
short var_28 = (short)13036;
unsigned long long int var_29 = 15594494018263024148ULL;
short var_30 = (short)5205;
unsigned char var_31 = (unsigned char)153;
signed char var_32 = (signed char)-80;
unsigned short var_33 = (unsigned short)18702;
unsigned int var_34 = 2935376672U;
int var_35 = 1229433047;
int var_36 = 772068799;
signed char var_37 = (signed char)88;
unsigned int var_38 = 1812473103U;
int var_39 = 1641871814;
int var_40 = 1824386266;
int var_41 = -1048803753;
unsigned int var_42 = 809700101U;
unsigned long long int var_43 = 17365781972682605848ULL;
unsigned short var_44 = (unsigned short)56851;
short var_45 = (short)16391;
int var_46 = -1167788265;
unsigned long long int var_47 = 12819364786989980196ULL;
unsigned int var_48 = 1417352794U;
signed char var_49 = (signed char)25;
unsigned long long int var_50 = 17164962224839351010ULL;
signed char var_51 = (signed char)49;
int var_52 = 2029995180;
unsigned long long int var_53 = 2649826128926953625ULL;
int var_54 = 1134412309;
int var_55 = -1132659736;
int var_56 = 1613935351;
int var_57 = 1661554102;
int var_58 = -1726400348;
unsigned short var_59 = (unsigned short)3999;
signed char var_60 = (signed char)97;
unsigned long long int var_61 = 1722837008130291588ULL;
long long int var_62 = -5956074228292967101LL;
signed char var_63 = (signed char)-29;
unsigned long long int arr_0 [21] ;
signed char arr_2 [21] [21] ;
int arr_4 [21] ;
unsigned char arr_5 [21] [21] [21] ;
unsigned short arr_6 [21] [21] ;
unsigned short arr_7 [21] ;
unsigned int arr_8 [21] [21] ;
unsigned short arr_9 [21] [21] ;
signed char arr_11 [21] [21] ;
unsigned long long int arr_12 [21] ;
unsigned char arr_15 [21] [21] [21] ;
_Bool arr_16 [21] ;
unsigned long long int arr_18 [21] [21] [21] [21] ;
unsigned char arr_20 [21] [21] [21] [21] ;
signed char arr_22 [21] [21] [21] [21] [21] ;
int arr_24 [21] [21] ;
signed char arr_25 [21] [21] [21] [21] [21] ;
signed char arr_29 [21] [21] ;
unsigned char arr_34 [21] ;
unsigned char arr_35 [21] [21] ;
unsigned char arr_37 [21] ;
unsigned short arr_38 [21] ;
int arr_46 [21] [21] [21] [21] [21] [21] [21] ;
signed char arr_48 [21] ;
unsigned int arr_60 [21] [21] [21] [21] [21] [21] ;
unsigned short arr_65 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 11846460810074586902ULL : 8879540423310330317ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-20 : (signed char)11;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 2042640157;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)199 : (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)8858 : (unsigned short)27271;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (unsigned short)30321;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_8 [i_0] [i_1] = 650932959U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_9 [i_0] [i_1] = (unsigned short)37985;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)123;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_12 [i_0] = 16418110500873487541ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 10702372595384762524ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (unsigned char)22;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-93;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_24 [i_0] [i_1] = -1401160130;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)104;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-117 : (signed char)-29;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_34 [i_0] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_35 [i_0] [i_1] = (unsigned char)220;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_37 [i_0] = (unsigned char)169;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_38 [i_0] = (unsigned short)59818;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? 2146248053 : -1208733673;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_48 [i_0] = (signed char)16;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_60 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 3845739173U : 2178367769U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_65 [i_0] = (unsigned short)8371;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
