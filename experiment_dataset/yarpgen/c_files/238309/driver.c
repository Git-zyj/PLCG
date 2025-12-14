#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 8438863839136446505LL;
unsigned short var_1 = (unsigned short)60890;
unsigned short var_2 = (unsigned short)50042;
unsigned int var_3 = 2125927765U;
unsigned char var_4 = (unsigned char)132;
short var_6 = (short)4510;
signed char var_7 = (signed char)-104;
unsigned long long int var_8 = 15341950729380513238ULL;
signed char var_9 = (signed char)75;
signed char var_10 = (signed char)79;
int zero = 0;
short var_11 = (short)-3411;
unsigned short var_12 = (unsigned short)51570;
short var_13 = (short)-21989;
unsigned char var_14 = (unsigned char)145;
signed char var_15 = (signed char)-78;
_Bool var_16 = (_Bool)0;
int var_17 = 1363273112;
unsigned short var_18 = (unsigned short)2378;
unsigned short var_19 = (unsigned short)38231;
unsigned int var_20 = 2713218812U;
unsigned int var_21 = 3748894882U;
unsigned short var_22 = (unsigned short)47464;
int var_23 = 1662224461;
unsigned int var_24 = 1617574376U;
unsigned short var_25 = (unsigned short)10393;
long long int var_26 = -8315381762330284257LL;
unsigned short var_27 = (unsigned short)10571;
short var_28 = (short)31978;
unsigned short var_29 = (unsigned short)56179;
_Bool var_30 = (_Bool)1;
unsigned int var_31 = 2188706471U;
long long int var_32 = 6985100304127945685LL;
unsigned int var_33 = 3513054526U;
_Bool var_34 = (_Bool)0;
unsigned char var_35 = (unsigned char)8;
unsigned char var_36 = (unsigned char)168;
signed char var_37 = (signed char)69;
signed char var_38 = (signed char)2;
unsigned int var_39 = 1319233159U;
unsigned long long int var_40 = 6025004643209067999ULL;
unsigned short var_41 = (unsigned short)13791;
int var_42 = 378589474;
int var_43 = -1449165180;
unsigned short var_44 = (unsigned short)55792;
signed char var_45 = (signed char)-94;
signed char var_46 = (signed char)-124;
signed char var_47 = (signed char)18;
long long int var_48 = -1317914687275590473LL;
unsigned int var_49 = 479889407U;
_Bool var_50 = (_Bool)1;
unsigned char var_51 = (unsigned char)88;
short var_52 = (short)8092;
unsigned int var_53 = 2590237228U;
unsigned long long int var_54 = 14884955339070740119ULL;
unsigned int var_55 = 403957482U;
unsigned int arr_1 [10] ;
short arr_4 [10] [10] [10] ;
int arr_8 [21] ;
unsigned int arr_9 [21] ;
unsigned short arr_10 [21] [21] ;
long long int arr_11 [21] ;
unsigned short arr_12 [21] [21] [21] ;
unsigned short arr_13 [21] ;
long long int arr_15 [21] [21] [21] ;
unsigned short arr_16 [21] [21] [21] ;
int arr_17 [21] [21] ;
int arr_18 [21] [21] ;
signed char arr_21 [21] [21] [21] [21] ;
unsigned int arr_23 [21] [21] ;
long long int arr_24 [21] ;
_Bool arr_25 [21] [21] [21] [21] ;
unsigned short arr_26 [21] [21] [21] [21] ;
signed char arr_29 [21] [21] [21] [21] [21] [21] ;
signed char arr_36 [21] [21] [21] [21] [21] ;
short arr_39 [21] [21] [21] [21] [21] [21] [21] ;
signed char arr_40 [21] [21] [21] [21] [21] ;
_Bool arr_47 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 119315050U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (short)6632;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 1953747572 : -639183090;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 21533226U : 4189515443U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_10 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)61745 : (unsigned short)47015;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_11 [i_0] = -3323824614319541733LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)27143 : (unsigned short)44008;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (unsigned short)57499;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3485624655729915817LL : -619985942988163206LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)11281 : (unsigned short)55497;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_17 [i_0] [i_1] = (i_1 % 2 == 0) ? -1165945879 : -977098409;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_18 [i_0] [i_1] = (i_0 % 2 == 0) ? -756674182 : -1419473866;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_23 [i_0] [i_1] = (i_0 % 2 == 0) ? 2938532581U : 3746603155U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 5073138431126457542LL : 7038818952665117033LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? (unsigned short)57071 : (unsigned short)43831;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_29 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_4 % 2 == 0) ? (signed char)-40 : (signed char)-101;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_36 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (signed char)-74 : (signed char)124;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 21; ++i_6) 
                                arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (short)15596;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = (signed char)-27;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_47 [i_0] [i_1] [i_2] = (_Bool)0;
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
    hash(&seed, var_49);
    hash(&seed, var_50);
    hash(&seed, var_51);
    hash(&seed, var_52);
    hash(&seed, var_53);
    hash(&seed, var_54);
    hash(&seed, var_55);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
