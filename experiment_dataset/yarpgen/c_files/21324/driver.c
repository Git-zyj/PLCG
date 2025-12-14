#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1406112813956288990LL;
unsigned long long int var_1 = 5986635974427279379ULL;
unsigned long long int var_2 = 10611521240120090317ULL;
_Bool var_3 = (_Bool)0;
int var_4 = 164965873;
unsigned char var_5 = (unsigned char)5;
unsigned long long int var_6 = 15421042790416151293ULL;
unsigned short var_7 = (unsigned short)53166;
int var_8 = -1234093003;
long long int var_9 = 3843726127605766578LL;
unsigned short var_10 = (unsigned short)20165;
unsigned int var_11 = 3660282563U;
unsigned int var_12 = 4211374685U;
unsigned int var_13 = 1404177532U;
signed char var_14 = (signed char)-102;
signed char var_15 = (signed char)-75;
unsigned int var_16 = 2778547097U;
unsigned int var_17 = 3490835364U;
int zero = 0;
unsigned short var_18 = (unsigned short)53936;
signed char var_19 = (signed char)8;
unsigned char var_20 = (unsigned char)23;
long long int var_21 = -7742626151024239957LL;
short var_22 = (short)17882;
unsigned char var_23 = (unsigned char)110;
unsigned int var_24 = 386522443U;
unsigned int var_25 = 2079033656U;
signed char var_26 = (signed char)107;
long long int var_27 = -4160007775297429031LL;
unsigned int var_28 = 4141302220U;
int var_29 = -283431717;
unsigned short var_30 = (unsigned short)47331;
unsigned char var_31 = (unsigned char)114;
unsigned long long int var_32 = 3604076027261301539ULL;
signed char var_33 = (signed char)45;
short var_34 = (short)4311;
unsigned short var_35 = (unsigned short)46410;
unsigned long long int var_36 = 14877841241619670033ULL;
unsigned char var_37 = (unsigned char)2;
signed char var_38 = (signed char)-71;
signed char var_39 = (signed char)60;
unsigned short var_40 = (unsigned short)20182;
unsigned char var_41 = (unsigned char)191;
unsigned long long int var_42 = 622069828210171830ULL;
unsigned int var_43 = 1666011239U;
unsigned long long int var_44 = 9113977516979427575ULL;
unsigned char var_45 = (unsigned char)76;
_Bool var_46 = (_Bool)0;
_Bool var_47 = (_Bool)1;
unsigned short var_48 = (unsigned short)2524;
unsigned char var_49 = (unsigned char)14;
unsigned char var_50 = (unsigned char)106;
int var_51 = -1251066378;
unsigned int var_52 = 4016162150U;
int var_53 = -623517790;
signed char var_54 = (signed char)105;
_Bool var_55 = (_Bool)0;
_Bool var_56 = (_Bool)1;
unsigned char var_57 = (unsigned char)27;
short var_58 = (short)30432;
long long int var_59 = -1196128464725365761LL;
unsigned char var_60 = (unsigned char)188;
long long int var_61 = 1104904715981744935LL;
unsigned short var_62 = (unsigned short)4970;
int var_63 = 1582146841;
unsigned char var_64 = (unsigned char)121;
unsigned long long int var_65 = 4125858658267736523ULL;
_Bool var_66 = (_Bool)1;
unsigned char arr_0 [13] ;
unsigned int arr_2 [13] ;
unsigned short arr_4 [13] ;
short arr_7 [13] [13] [13] ;
unsigned char arr_9 [13] [13] [13] ;
unsigned short arr_12 [13] [13] [13] [13] [13] [13] ;
long long int arr_26 [13] [13] [13] ;
short arr_28 [13] ;
unsigned char arr_32 [13] [13] [13] [13] ;
signed char arr_38 [13] [13] [13] ;
_Bool arr_52 [13] [13] ;
long long int arr_53 [13] [13] ;
_Bool arr_5 [13] ;
signed char arr_25 [13] ;
unsigned char arr_30 [13] [13] [13] ;
signed char arr_31 [13] [13] [13] [13] [13] ;
unsigned long long int arr_36 [13] ;
unsigned short arr_46 [13] [13] ;
signed char arr_56 [13] [13] ;
long long int arr_60 [13] [13] [13] ;
int arr_72 [12] ;
long long int arr_73 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)182;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 1103270238U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)11665 : (unsigned short)44164;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (short)21057;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)100 : (unsigned char)56;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 13; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)17803;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_26 [i_0] [i_1] [i_2] = -6140069774867216733LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? (short)28047 : (short)9247;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_38 [i_0] [i_1] [i_2] = (signed char)-92;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_52 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_53 [i_0] [i_1] = -8654681527347471155LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (signed char)-43 : (signed char)26;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)69 : (unsigned char)200;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (signed char)41 : (signed char)110;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? 849996309025293631ULL : 4215906556799148224ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_46 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)47002 : (unsigned short)58526;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_56 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)29 : (signed char)-7;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_60 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1808222342223521966LL : -3729759147391458927LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_72 [i_0] = (i_0 % 2 == 0) ? 848617521 : 1720826928;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_73 [i_0] = 1560393410286241415LL;
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
    hash(&seed, var_59);
    hash(&seed, var_60);
    hash(&seed, var_61);
    hash(&seed, var_62);
    hash(&seed, var_63);
    hash(&seed, var_64);
    hash(&seed, var_65);
    hash(&seed, var_66);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_30 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 13; ++i_4) 
                        hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_46 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_56 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_60 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_72 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_73 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
