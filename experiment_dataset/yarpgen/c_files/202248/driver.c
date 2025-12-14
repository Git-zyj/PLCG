#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 654144586U;
unsigned int var_1 = 3442891744U;
unsigned short var_5 = (unsigned short)33023;
unsigned int var_7 = 2824428757U;
unsigned short var_8 = (unsigned short)40728;
unsigned long long int var_9 = 5932832691044038996ULL;
int var_11 = 1860438403;
int var_12 = 1718290187;
unsigned long long int var_13 = 3545934245833342047ULL;
unsigned short var_14 = (unsigned short)61841;
unsigned int var_15 = 2503696177U;
int var_16 = 2013535278;
unsigned long long int var_17 = 12893867096223632180ULL;
int zero = 0;
unsigned long long int var_18 = 5132677654102543640ULL;
unsigned int var_19 = 3310287349U;
int var_20 = -724149252;
unsigned short var_21 = (unsigned short)51644;
signed char var_22 = (signed char)-126;
unsigned char var_23 = (unsigned char)61;
int var_24 = -1799491242;
unsigned long long int var_25 = 8198289457264703216ULL;
signed char var_26 = (signed char)-41;
unsigned short var_27 = (unsigned short)20804;
unsigned long long int var_28 = 8696470074987862049ULL;
int var_29 = -2078021973;
signed char var_30 = (signed char)9;
unsigned long long int var_31 = 15301679129289858091ULL;
unsigned long long int var_32 = 9531832570101409690ULL;
_Bool var_33 = (_Bool)1;
signed char var_34 = (signed char)35;
unsigned long long int var_35 = 13844678469824351764ULL;
int var_36 = 1331118948;
signed char var_37 = (signed char)51;
int var_38 = 1000438528;
unsigned int arr_11 [12] [12] [12] [12] ;
unsigned short arr_14 [12] [12] [12] [12] [12] [12] ;
unsigned int arr_24 [10] ;
unsigned int arr_30 [25] [25] ;
unsigned short arr_40 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_11 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 3847559947U : 43181945U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)35744;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_24 [i_0] = 857929073U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_30 [i_0] [i_1] = 871532707U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_40 [i_0] [i_1] = (unsigned short)8612;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    hash(&seed, arr_11 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 12; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 12; ++i_5) 
                            hash(&seed, arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_30 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_40 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
