#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1744750152;
unsigned int var_1 = 3201023410U;
unsigned int var_2 = 3530347569U;
unsigned short var_3 = (unsigned short)57941;
unsigned long long int var_4 = 668447385007215235ULL;
unsigned char var_5 = (unsigned char)222;
unsigned long long int var_6 = 311514881247700870ULL;
int var_7 = 2071362701;
int var_8 = -1274833429;
_Bool var_9 = (_Bool)1;
int var_10 = -1475426790;
int var_11 = -510186286;
int zero = 0;
int var_12 = 643506100;
unsigned long long int var_13 = 6054923792010922741ULL;
unsigned int var_14 = 4172141957U;
unsigned int var_15 = 4229191206U;
short var_16 = (short)3023;
int var_17 = 739970690;
signed char var_18 = (signed char)80;
unsigned int var_19 = 1275006291U;
unsigned int var_20 = 4013873341U;
unsigned short var_21 = (unsigned short)26645;
unsigned char var_22 = (unsigned char)190;
unsigned char var_23 = (unsigned char)53;
unsigned long long int var_24 = 14673729177718448902ULL;
unsigned char var_25 = (unsigned char)42;
unsigned int var_26 = 3549362633U;
unsigned char var_27 = (unsigned char)161;
unsigned char var_28 = (unsigned char)24;
unsigned int var_29 = 3309830704U;
unsigned short var_30 = (unsigned short)29845;
unsigned short var_31 = (unsigned short)38145;
unsigned long long int var_32 = 8406428427469077673ULL;
unsigned int var_33 = 4247149471U;
unsigned long long int var_34 = 2503670738477671766ULL;
unsigned char arr_0 [12] ;
unsigned short arr_1 [12] ;
short arr_4 [12] ;
unsigned char arr_5 [12] ;
unsigned long long int arr_7 [12] ;
unsigned char arr_8 [12] [12] [12] ;
short arr_17 [12] [12] [12] [12] [12] ;
short arr_18 [12] [12] [12] [12] [12] [12] ;
int arr_19 [12] [12] [12] [12] [12] [12] [12] ;
unsigned char arr_32 [13] [13] ;
unsigned int arr_33 [13] ;
unsigned long long int arr_40 [25] ;
short arr_41 [25] ;
unsigned int arr_42 [25] ;
unsigned char arr_43 [25] ;
int arr_46 [25] [25] [25] ;
short arr_47 [25] [25] [25] ;
int arr_50 [25] [25] [25] ;
short arr_53 [25] [25] [25] ;
unsigned char arr_54 [25] [25] [25] ;
int arr_57 [25] [25] [25] [25] ;
short arr_58 [25] [25] [25] [25] ;
unsigned char arr_77 [25] [25] [25] [25] ;
int arr_2 [12] ;
_Bool arr_6 [12] ;
unsigned short arr_10 [12] [12] ;
unsigned long long int arr_11 [12] [12] [12] ;
unsigned char arr_25 [12] ;
unsigned long long int arr_26 [12] [12] [12] [12] [12] [12] ;
signed char arr_27 [12] [12] [12] ;
int arr_30 [12] ;
unsigned char arr_31 [12] [12] [12] [12] ;
unsigned long long int arr_37 [12] ;
signed char arr_38 [12] ;
unsigned char arr_39 [12] ;
unsigned long long int arr_48 [25] [25] [25] ;
unsigned long long int arr_49 [25] ;
unsigned short arr_55 [25] [25] [25] ;
short arr_59 [25] [25] [25] ;
short arr_62 [25] [25] [25] ;
int arr_69 [25] [25] [25] [25] [25] ;
unsigned short arr_79 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)31565;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (short)25754;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_7 [i_0] = 2860643735580749019ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (unsigned char)139;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_2 % 2 == 0) ? (short)-15459 : (short)4338;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_18 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-25603;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_2 % 2 == 0) ? 1082451789 : 729013186;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_32 [i_0] [i_1] = (unsigned char)44;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_33 [i_0] = 2548087934U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_40 [i_0] = 14783809361947285410ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_41 [i_0] = (short)12159;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_42 [i_0] = 2362661235U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_43 [i_0] = (unsigned char)101;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = 815714523;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (short)-29157;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_50 [i_0] [i_1] [i_2] = -1833860508;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = (short)-32152;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_54 [i_0] [i_1] [i_2] = (unsigned char)235;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_57 [i_0] [i_1] [i_2] [i_3] = 81776932;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_58 [i_0] [i_1] [i_2] [i_3] = (short)-25324;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    arr_77 [i_0] [i_1] [i_2] [i_3] = (unsigned char)137;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 1695372674;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned short)20078;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 6146712757045986629ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? (unsigned char)95 : (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_1 % 2 == 0) ? 8571877645776503138ULL : 12365929880190166893ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_27 [i_0] [i_1] [i_2] = (signed char)81;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_30 [i_0] = -500977810;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_31 [i_0] [i_1] [i_2] [i_3] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_37 [i_0] = 18321664437740562058ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_38 [i_0] = (signed char)-32;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_39 [i_0] = (unsigned char)237;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_48 [i_0] [i_1] [i_2] = 5054415689097408822ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_49 [i_0] = 10229153246454522847ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_55 [i_0] [i_1] [i_2] = (unsigned short)26177;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_59 [i_0] [i_1] [i_2] = (short)-20682;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_62 [i_0] [i_1] [i_2] = (short)23031;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_69 [i_0] [i_1] [i_2] [i_3] [i_4] = -1979059906;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_79 [i_0] [i_1] = (unsigned short)32593;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_11 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                hash(&seed, arr_27 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_30 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_37 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_38 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_39 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_48 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_49 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_55 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_59 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_62 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        hash(&seed, arr_69 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_79 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
