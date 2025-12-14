#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3344937203U;
unsigned int var_1 = 2222975016U;
unsigned long long int var_2 = 8720488537940296475ULL;
unsigned int var_3 = 1825388820U;
unsigned long long int var_4 = 8445799425609099490ULL;
unsigned char var_5 = (unsigned char)201;
unsigned int var_6 = 2837943757U;
signed char var_8 = (signed char)101;
_Bool var_9 = (_Bool)1;
long long int var_10 = 890759775619635595LL;
int zero = 0;
signed char var_11 = (signed char)18;
signed char var_12 = (signed char)7;
long long int var_13 = -8920037061106255592LL;
long long int var_14 = 5976631082309656621LL;
unsigned int var_15 = 3896379266U;
unsigned int var_16 = 1890940828U;
unsigned short var_17 = (unsigned short)34404;
unsigned char var_18 = (unsigned char)191;
unsigned int var_19 = 3687724691U;
_Bool var_20 = (_Bool)1;
int var_21 = 1713394797;
signed char var_22 = (signed char)-43;
long long int var_23 = -4618409345308281845LL;
_Bool var_24 = (_Bool)0;
signed char var_25 = (signed char)-44;
signed char var_26 = (signed char)-70;
unsigned short var_27 = (unsigned short)11569;
_Bool var_28 = (_Bool)0;
unsigned int var_29 = 849585031U;
unsigned int var_30 = 4227023346U;
unsigned int var_31 = 980769261U;
long long int var_32 = -2212645670465536172LL;
unsigned int var_33 = 2075676960U;
unsigned int var_34 = 2249112000U;
unsigned int var_35 = 1497726134U;
unsigned char var_36 = (unsigned char)110;
int var_37 = -1371817186;
unsigned short var_38 = (unsigned short)31944;
unsigned short var_39 = (unsigned short)49325;
int var_40 = -1562116311;
unsigned char var_41 = (unsigned char)52;
unsigned int var_42 = 2593990U;
short var_43 = (short)14958;
unsigned int var_44 = 572498128U;
unsigned int var_45 = 3312105676U;
long long int var_46 = -2507810735076979776LL;
unsigned short var_47 = (unsigned short)29480;
int var_48 = -1344202618;
long long int var_49 = -4740046438556708641LL;
unsigned char var_50 = (unsigned char)4;
signed char arr_0 [10] ;
long long int arr_1 [10] ;
unsigned int arr_3 [10] ;
signed char arr_4 [10] ;
unsigned long long int arr_5 [10] [10] ;
unsigned int arr_6 [10] ;
unsigned long long int arr_7 [10] [10] ;
unsigned char arr_9 [10] ;
long long int arr_10 [10] [10] ;
unsigned int arr_12 [10] [10] ;
signed char arr_15 [10] [10] [10] ;
unsigned int arr_16 [10] [10] [10] [10] ;
_Bool arr_21 [10] [10] ;
unsigned char arr_23 [10] [10] [10] ;
unsigned short arr_27 [10] [10] [10] [10] ;
signed char arr_28 [10] [10] [10] ;
signed char arr_37 [10] ;
int arr_50 [14] ;
signed char arr_51 [14] ;
unsigned int arr_24 [10] [10] [10] ;
_Bool arr_25 [10] [10] [10] [10] ;
long long int arr_32 [10] [10] [10] ;
unsigned int arr_39 [10] [10] ;
unsigned char arr_46 [10] [10] [10] ;
short arr_53 [14] [14] [14] ;
unsigned char arr_56 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)-115;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = -4234228536588417368LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 303153538U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (signed char)41;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_5 [i_0] [i_1] = 18241928156727765950ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 1760283000U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_7 [i_0] [i_1] = 3720440931977512118ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (unsigned char)60;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_10 [i_0] [i_1] = 5653226138466797110LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_12 [i_0] [i_1] = 264773002U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (signed char)-63;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = 1545234185U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_21 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (unsigned char)118;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_27 [i_0] [i_1] [i_2] [i_3] = (unsigned short)41477;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = (signed char)76;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_37 [i_0] = (signed char)46;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_50 [i_0] = 1718914161;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_51 [i_0] = (signed char)-68;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = 2938403252U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_32 [i_0] [i_1] [i_2] = -2850900534298974619LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_39 [i_0] [i_1] = 4057964775U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_46 [i_0] [i_1] [i_2] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_53 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-20496 : (short)-23127;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_56 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)120 : (unsigned char)243;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_24 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    hash(&seed, arr_25 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_32 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_39 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_46 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_53 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_56 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
