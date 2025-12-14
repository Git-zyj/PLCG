#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 9078033686753891868ULL;
unsigned char var_2 = (unsigned char)64;
unsigned short var_3 = (unsigned short)61249;
unsigned char var_5 = (unsigned char)108;
unsigned char var_6 = (unsigned char)226;
unsigned int var_7 = 4067928951U;
int var_8 = -1616896366;
short var_9 = (short)17236;
long long int var_10 = -2375312319697847541LL;
unsigned int var_11 = 1132342090U;
short var_12 = (short)2937;
long long int var_13 = 3977480610381415045LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned char var_15 = (unsigned char)8;
unsigned char var_16 = (unsigned char)150;
unsigned short var_17 = (unsigned short)15361;
int var_18 = 139168984;
int var_19 = -1509162528;
int var_20 = 1362817252;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-10128;
unsigned int var_24 = 479605487U;
int var_25 = -526544436;
_Bool var_26 = (_Bool)1;
unsigned int var_27 = 1435149164U;
unsigned int var_28 = 2476282817U;
unsigned int var_29 = 2766331786U;
_Bool var_30 = (_Bool)0;
_Bool var_31 = (_Bool)1;
long long int var_32 = 5070034058578874358LL;
unsigned long long int var_33 = 12089114194314427958ULL;
int var_34 = 179439448;
long long int var_35 = -4920731487968338231LL;
short var_36 = (short)-29252;
unsigned int var_37 = 4227751900U;
long long int var_38 = 5762690995074516197LL;
int var_39 = 889862209;
unsigned char var_40 = (unsigned char)192;
int var_41 = 557954149;
unsigned int var_42 = 721320221U;
unsigned long long int var_43 = 16504893854103127864ULL;
unsigned long long int var_44 = 18128783744228280167ULL;
unsigned int var_45 = 3392595760U;
long long int var_46 = -6361991412616054932LL;
unsigned char var_47 = (unsigned char)222;
unsigned char var_48 = (unsigned char)149;
int var_49 = 1543214494;
signed char var_50 = (signed char)54;
_Bool var_51 = (_Bool)1;
unsigned char var_52 = (unsigned char)221;
signed char var_53 = (signed char)105;
signed char var_54 = (signed char)-14;
unsigned char var_55 = (unsigned char)80;
unsigned char var_56 = (unsigned char)72;
long long int var_57 = -6487344934814774462LL;
unsigned short var_58 = (unsigned short)8181;
signed char var_59 = (signed char)90;
unsigned short var_60 = (unsigned short)8301;
unsigned long long int var_61 = 13617363348369506536ULL;
long long int var_62 = 1928346692417118544LL;
long long int var_63 = 6962291739618456641LL;
unsigned long long int var_64 = 2016097693028087810ULL;
int var_65 = 545825480;
_Bool var_66 = (_Bool)0;
signed char var_67 = (signed char)27;
_Bool var_68 = (_Bool)1;
_Bool arr_2 [12] ;
unsigned short arr_5 [14] [14] ;
long long int arr_6 [14] [14] ;
short arr_7 [14] [14] ;
long long int arr_8 [14] ;
_Bool arr_10 [17] ;
_Bool arr_11 [17] [17] [17] ;
int arr_13 [17] [17] [17] ;
unsigned short arr_17 [15] [15] ;
long long int arr_19 [15] ;
unsigned int arr_22 [23] ;
long long int arr_24 [23] [23] [23] [23] ;
unsigned long long int arr_25 [23] [23] [23] [23] ;
unsigned short arr_27 [23] ;
int arr_29 [23] [23] [23] [23] [23] [23] ;
long long int arr_30 [23] [23] [23] [23] [23] ;
unsigned char arr_32 [23] [23] [23] [23] [23] ;
_Bool arr_36 [23] [23] [23] [23] [23] ;
long long int arr_37 [23] [23] [23] [23] ;
unsigned long long int arr_40 [23] [23] [23] [23] [23] [23] [23] ;
unsigned char arr_44 [23] [23] ;
long long int arr_46 [23] [23] [23] [23] [23] ;
unsigned char arr_49 [23] [23] [23] [23] [23] [23] ;
long long int arr_64 [13] [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)7037 : (unsigned short)57388;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = 3411484967266623597LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)30457 : (short)-629;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_8 [i_0] = -7939265110881838924LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_10 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 219843658 : -1282330575;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)55097;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_19 [i_0] = -1130390280715503260LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_22 [i_0] = 3671533891U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_24 [i_0] [i_1] [i_2] [i_3] = -3714177672407044402LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = 17984593591943931029ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_27 [i_0] = (i_0 % 2 == 0) ? (unsigned short)29447 : (unsigned short)43034;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1201068630;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_30 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? -7378578941461660786LL : -4519276329963581445LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (unsigned char)163 : (unsigned char)65;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    arr_37 [i_0] [i_1] [i_2] [i_3] = 5233037726326041842LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 23; ++i_6) 
                                arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_3 % 2 == 0) ? 13059503606225763105ULL : 3921446630170039049ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_44 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)205 : (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_46 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? -1738869970802653807LL : 4688001437410729157LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 23; ++i_5) 
                            arr_49 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)66;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_64 [i_0] [i_1] [i_2] [i_3] = 9213506630700483891LL;
}

void checksum() {
    hash(&seed, var_14);
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
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    hash(&seed, var_67);
    hash(&seed, var_68);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
