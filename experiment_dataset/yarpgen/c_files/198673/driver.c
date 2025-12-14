#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)21541;
unsigned char var_2 = (unsigned char)255;
unsigned long long int var_3 = 1179360991406445502ULL;
int var_4 = 446335053;
unsigned int var_5 = 3517908842U;
unsigned long long int var_6 = 10616769096553438490ULL;
signed char var_7 = (signed char)-72;
unsigned char var_10 = (unsigned char)123;
int var_11 = -66019618;
unsigned char var_12 = (unsigned char)30;
short var_13 = (short)-26059;
signed char var_14 = (signed char)76;
unsigned int var_15 = 1098902338U;
unsigned int var_16 = 4096471024U;
unsigned char var_17 = (unsigned char)203;
unsigned char var_18 = (unsigned char)129;
int zero = 0;
unsigned int var_19 = 303369671U;
unsigned int var_20 = 1584084844U;
short var_21 = (short)10001;
unsigned long long int var_22 = 15627196285658489757ULL;
short var_23 = (short)-10425;
unsigned int var_24 = 100410501U;
unsigned int var_25 = 3231647988U;
short var_26 = (short)13516;
int var_27 = 106740934;
unsigned int var_28 = 1889216935U;
long long int var_29 = 6553729833344679783LL;
_Bool var_30 = (_Bool)1;
int var_31 = 1176531489;
short var_32 = (short)-8802;
unsigned int var_33 = 874218604U;
signed char var_34 = (signed char)-23;
signed char var_35 = (signed char)26;
int var_36 = -1752659987;
unsigned long long int var_37 = 340866296958109839ULL;
long long int var_38 = -2744528265855781423LL;
unsigned long long int var_39 = 17234754692620823517ULL;
unsigned int var_40 = 1003980787U;
unsigned int var_41 = 2906739881U;
int var_42 = 1486938203;
unsigned long long int var_43 = 1092337516399371011ULL;
long long int var_44 = 8409586805703131552LL;
signed char var_45 = (signed char)80;
unsigned long long int var_46 = 10005185462950310968ULL;
unsigned long long int var_47 = 11762528447301001123ULL;
int var_48 = 1224148669;
unsigned long long int var_49 = 2512039593621215604ULL;
unsigned long long int var_50 = 6602643722713164573ULL;
_Bool var_51 = (_Bool)1;
unsigned long long int var_52 = 8954475057464575338ULL;
short var_53 = (short)-12047;
short var_54 = (short)-22047;
short var_55 = (short)4686;
unsigned long long int var_56 = 3430226907576137157ULL;
signed char var_57 = (signed char)-93;
unsigned long long int var_58 = 12863620275741666234ULL;
long long int var_59 = 7622363825420751379LL;
unsigned int arr_0 [12] ;
unsigned long long int arr_1 [12] ;
signed char arr_3 [12] ;
short arr_4 [12] ;
signed char arr_5 [12] [12] [12] ;
short arr_6 [12] [12] [12] [12] ;
_Bool arr_7 [12] [12] [12] [12] ;
signed char arr_8 [12] [12] [12] [12] ;
int arr_9 [12] [12] [12] [12] ;
short arr_10 [12] [12] [12] [12] [12] [12] ;
unsigned int arr_11 [12] [12] ;
signed char arr_13 [12] [12] [12] ;
short arr_14 [12] [12] ;
unsigned long long int arr_15 [12] [12] [12] ;
unsigned char arr_16 [12] [12] ;
int arr_19 [12] ;
long long int arr_22 [12] [12] [12] [12] [12] [12] [12] ;
unsigned int arr_24 [12] [12] ;
long long int arr_25 [12] [12] [12] [12] [12] [12] ;
short arr_32 [12] [12] [12] [12] [12] [12] ;
int arr_37 [12] [12] [12] [12] [12] ;
unsigned int arr_40 [12] [12] [12] [12] [12] ;
unsigned int arr_42 [12] ;
short arr_44 [12] ;
unsigned char arr_56 [23] [23] ;
signed char arr_57 [23] [23] ;
long long int arr_59 [20] ;
unsigned char arr_60 [20] ;
unsigned int arr_64 [20] ;
short arr_65 [20] ;
unsigned long long int arr_29 [12] [12] [12] [12] ;
unsigned int arr_30 [12] [12] ;
_Bool arr_38 [12] [12] [12] [12] [12] ;
_Bool arr_47 [12] [12] ;
short arr_48 [12] [12] [12] [12] ;
unsigned long long int arr_61 [20] ;
unsigned int arr_62 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 1914686414U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 6057617046480891624ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (signed char)103;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (short)-28082 : (short)19195;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)-97 : (signed char)52;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (short)21188;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_7 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = 695252500;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)21516;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = 3562881519U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (signed char)-46;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_14 [i_0] [i_1] = (short)3355;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 2559462051822517566ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)185;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_19 [i_0] = 584898099;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 12; ++i_6) 
                                arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (i_0 % 2 == 0) ? -4091683155936426059LL : 1807002844320324058LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_24 [i_0] [i_1] = 3268905490U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = -2160884570160536206LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_32 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-28175;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_37 [i_0] [i_1] [i_2] [i_3] [i_4] = -214729709;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_40 [i_0] [i_1] [i_2] [i_3] [i_4] = 3613654899U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_42 [i_0] = 1967791439U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_44 [i_0] = (short)-30592;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_56 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)27 : (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_57 [i_0] [i_1] = (signed char)-35;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_59 [i_0] = -4240452968689109975LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_60 [i_0] = (unsigned char)122;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_64 [i_0] = 2503593582U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_65 [i_0] = (short)-779;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = 9135155177461386712ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_30 [i_0] [i_1] = 3358794982U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_4 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_47 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_48 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? (short)11674 : (short)28791;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_61 [i_0] = 13202173953555805203ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_62 [i_0] = 2858392485U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_29 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_47 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_48 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_61 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_62 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
