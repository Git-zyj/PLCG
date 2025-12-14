#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned short var_1 = (unsigned short)46974;
unsigned short var_2 = (unsigned short)22705;
unsigned int var_3 = 537889184U;
signed char var_4 = (signed char)32;
unsigned char var_5 = (unsigned char)225;
long long int var_6 = -3939858694396548587LL;
unsigned char var_7 = (unsigned char)12;
unsigned short var_8 = (unsigned short)48783;
signed char var_9 = (signed char)124;
unsigned char var_10 = (unsigned char)64;
int zero = 0;
int var_11 = -173609413;
long long int var_12 = 5458428004824843532LL;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)111;
short var_15 = (short)-3092;
unsigned char var_16 = (unsigned char)169;
unsigned char var_17 = (unsigned char)191;
short var_18 = (short)8897;
unsigned int var_19 = 3553426237U;
unsigned int var_20 = 2129294827U;
unsigned char var_21 = (unsigned char)66;
unsigned short var_22 = (unsigned short)29600;
int var_23 = -1240366992;
long long int var_24 = 4350065190025387546LL;
unsigned char var_25 = (unsigned char)0;
unsigned long long int var_26 = 9393603824671474318ULL;
long long int var_27 = 5345535249935300882LL;
long long int var_28 = 7757881391087972291LL;
int var_29 = -882821770;
_Bool var_30 = (_Bool)1;
unsigned char var_31 = (unsigned char)52;
signed char var_32 = (signed char)36;
unsigned short var_33 = (unsigned short)1055;
int var_34 = -1410166835;
_Bool var_35 = (_Bool)0;
signed char var_36 = (signed char)-119;
_Bool var_37 = (_Bool)0;
unsigned short var_38 = (unsigned short)25704;
unsigned short var_39 = (unsigned short)52167;
unsigned short var_40 = (unsigned short)51214;
unsigned char var_41 = (unsigned char)125;
unsigned short var_42 = (unsigned short)44254;
_Bool var_43 = (_Bool)0;
unsigned long long int var_44 = 15194949744117607203ULL;
unsigned short var_45 = (unsigned short)47100;
int var_46 = 807665421;
unsigned short var_47 = (unsigned short)19551;
signed char var_48 = (signed char)24;
unsigned short arr_0 [21] ;
int arr_1 [21] ;
unsigned short arr_3 [21] [21] ;
unsigned int arr_4 [21] ;
unsigned int arr_6 [21] [21] [21] [21] ;
short arr_8 [21] [21] [21] [21] ;
unsigned int arr_9 [21] ;
unsigned short arr_10 [21] [21] [21] [21] [21] ;
int arr_11 [21] [21] [21] [21] ;
unsigned int arr_12 [21] [21] [21] [21] ;
unsigned int arr_13 [21] [21] [21] [21] [21] [21] ;
short arr_15 [21] [21] [21] [21] [21] ;
unsigned int arr_17 [21] [21] [21] [21] ;
unsigned int arr_22 [21] [21] [21] ;
unsigned char arr_23 [21] [21] [21] [21] [21] [21] ;
_Bool arr_24 [21] ;
unsigned short arr_25 [21] ;
long long int arr_27 [21] [21] ;
long long int arr_29 [21] ;
_Bool arr_30 [21] [21] ;
int arr_33 [21] ;
unsigned short arr_39 [11] [11] ;
unsigned int arr_44 [11] [11] [11] [11] ;
unsigned long long int arr_45 [11] ;
unsigned short arr_49 [20] ;
unsigned char arr_50 [20] ;
unsigned short arr_51 [20] ;
long long int arr_64 [17] ;
_Bool arr_2 [21] ;
_Bool arr_16 [21] ;
_Bool arr_34 [21] ;
signed char arr_37 [21] [21] [21] ;
unsigned char arr_38 [21] ;
long long int arr_47 [11] ;
long long int arr_56 [20] ;
unsigned short arr_61 [20] [20] [20] [20] ;
_Bool arr_66 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (unsigned short)9040;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -15595710;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)24805;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 3686103791U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 1713234983U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (short)-28192;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = 528637936U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (unsigned short)49918;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = 1016997026;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_12 [i_0] [i_1] [i_2] [i_3] = 237537923U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 4263776491U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_15 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)13401;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 560729370U : 1196833172U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_22 [i_0] [i_1] [i_2] = 3572194652U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_24 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_25 [i_0] = (unsigned short)38408;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_27 [i_0] [i_1] = 6060871867232209590LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_29 [i_0] = -7567934514613362448LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_30 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_33 [i_0] = 1416271382;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_39 [i_0] [i_1] = (unsigned short)15443;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    arr_44 [i_0] [i_1] [i_2] [i_3] = 3158570916U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_45 [i_0] = 4674352441126005105ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_49 [i_0] = (unsigned short)14553;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_50 [i_0] = (unsigned char)153;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_51 [i_0] = (i_0 % 2 == 0) ? (unsigned short)25075 : (unsigned short)35839;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_64 [i_0] = -1908403206144191593LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_16 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_34 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_38 [i_0] = (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_47 [i_0] = -3368515043737771391LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_56 [i_0] = (i_0 % 2 == 0) ? -4650042307404983494LL : -1271272926166841254LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_61 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)32772 : (unsigned short)64619;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_66 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_34 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_47 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_56 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_61 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_66 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
