#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)1;
long long int var_2 = 2207870434170546126LL;
unsigned char var_3 = (unsigned char)32;
short var_4 = (short)-19222;
long long int var_5 = -8828414085225818006LL;
signed char var_6 = (signed char)122;
long long int var_7 = 8577769799501827186LL;
long long int var_8 = -5294688528603976738LL;
int var_10 = 2001656212;
signed char var_11 = (signed char)-81;
unsigned long long int var_12 = 9254191221971808633ULL;
unsigned int var_13 = 2568881063U;
unsigned long long int var_14 = 237529229618714020ULL;
unsigned long long int var_15 = 10525315912665754653ULL;
unsigned long long int var_16 = 18325613827680413987ULL;
short var_17 = (short)5538;
int zero = 0;
long long int var_18 = 438962310931445215LL;
unsigned int var_19 = 4103350418U;
int var_20 = 429253395;
long long int var_21 = -3228437908928324181LL;
unsigned char var_22 = (unsigned char)134;
unsigned char var_23 = (unsigned char)212;
unsigned int var_24 = 2091722061U;
unsigned short var_25 = (unsigned short)7305;
unsigned short var_26 = (unsigned short)14436;
signed char var_27 = (signed char)-124;
int var_28 = 1089645356;
long long int var_29 = 7673383930839006706LL;
long long int var_30 = -3353238929463945908LL;
long long int var_31 = -2084689917909682126LL;
int var_32 = 457669524;
unsigned short var_33 = (unsigned short)43419;
int var_34 = 728779775;
unsigned char var_35 = (unsigned char)17;
long long int var_36 = 726571418738372215LL;
unsigned long long int var_37 = 1956550511596430283ULL;
unsigned char var_38 = (unsigned char)117;
int var_39 = 996990677;
int arr_0 [16] [16] ;
signed char arr_1 [16] ;
int arr_2 [16] ;
unsigned long long int arr_4 [16] ;
signed char arr_9 [16] [16] ;
unsigned char arr_10 [16] [16] [16] [16] ;
unsigned int arr_13 [13] ;
signed char arr_19 [13] ;
signed char arr_25 [13] [13] [13] [13] ;
unsigned short arr_38 [20] ;
short arr_39 [20] [20] ;
short arr_40 [20] [20] ;
unsigned short arr_41 [20] ;
unsigned long long int arr_42 [20] ;
signed char arr_43 [20] ;
unsigned int arr_46 [20] [20] ;
signed char arr_47 [20] [20] [20] ;
unsigned int arr_49 [20] [20] [20] ;
int arr_11 [16] [16] ;
signed char arr_15 [13] ;
long long int arr_16 [13] ;
unsigned short arr_17 [13] [13] ;
long long int arr_28 [13] [13] [13] [13] ;
signed char arr_31 [13] [13] [13] ;
signed char arr_32 [13] [13] [13] [13] ;
signed char arr_36 [13] [13] [13] [13] ;
unsigned long long int arr_37 [13] [13] [13] ;
int arr_44 [20] [20] ;
unsigned long long int arr_48 [20] [20] [20] ;
int arr_52 [20] ;
int arr_53 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = 1998081238;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (signed char)-116;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -518312193;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 10863154941062984227ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_9 [i_0] [i_1] = (signed char)52;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (unsigned char)203;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = 1596889595U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_19 [i_0] = (signed char)-72;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (signed char)111;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_38 [i_0] = (unsigned short)3233;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_39 [i_0] [i_1] = (short)-28883;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_40 [i_0] [i_1] = (short)-11789;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_41 [i_0] = (unsigned short)44062;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_42 [i_0] = 17547690107739712830ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_43 [i_0] = (signed char)-69;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_46 [i_0] [i_1] = 3808250502U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_49 [i_0] [i_1] [i_2] = 3927765360U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_11 [i_0] [i_1] = -1147521443;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_15 [i_0] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = -6934737051285694717LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_17 [i_0] [i_1] = (unsigned short)48854;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = -8291637473550114174LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (signed char)(-127 - 1);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_32 [i_0] [i_1] [i_2] [i_3] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_36 [i_0] [i_1] [i_2] [i_3] = (signed char)69;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = 16228781678472454247ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_44 [i_0] [i_1] = 2071379324;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = 12956276833183958616ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_52 [i_0] = 1821197985;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_53 [i_0] = 252715567;
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_28 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_31 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_32 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    hash(&seed, arr_36 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_44 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                hash(&seed, arr_48 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_52 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_53 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
