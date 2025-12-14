#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2761252870U;
long long int var_1 = 6252422472950743446LL;
unsigned char var_2 = (unsigned char)30;
unsigned int var_3 = 460678679U;
int var_4 = 271248186;
unsigned int var_5 = 1249714676U;
int var_6 = 454394140;
short var_8 = (short)-4919;
unsigned long long int var_10 = 14161871710914108844ULL;
unsigned int var_11 = 3045097382U;
long long int var_12 = -7555450462141296205LL;
long long int var_13 = 7123229132979077046LL;
unsigned int var_14 = 2015282401U;
int var_15 = 1217382796;
long long int var_16 = 1846434809988374348LL;
unsigned int var_17 = 3337511431U;
unsigned long long int var_18 = 16173953237629804524ULL;
unsigned int var_19 = 4206890955U;
int zero = 0;
unsigned char var_20 = (unsigned char)231;
long long int var_21 = 6196282141461600100LL;
int var_22 = 1886545670;
short var_23 = (short)32036;
_Bool var_24 = (_Bool)0;
unsigned int var_25 = 761666863U;
short var_26 = (short)4174;
unsigned char var_27 = (unsigned char)132;
unsigned int var_28 = 3289416843U;
int var_29 = 846863348;
unsigned int arr_0 [15] ;
short arr_1 [15] [15] ;
unsigned int arr_4 [24] ;
unsigned int arr_5 [24] ;
short arr_6 [24] ;
long long int arr_7 [24] ;
long long int arr_12 [11] ;
unsigned int arr_13 [11] ;
unsigned long long int arr_14 [11] [11] ;
unsigned long long int arr_19 [11] ;
unsigned char arr_20 [11] [11] ;
long long int arr_23 [11] [11] [11] ;
int arr_31 [11] ;
long long int arr_35 [11] [11] [11] [11] [11] [11] ;
int arr_42 [11] ;
int arr_2 [15] ;
unsigned int arr_3 [15] ;
int arr_8 [24] [24] ;
unsigned char arr_9 [24] [24] ;
unsigned int arr_10 [24] ;
long long int arr_11 [24] [24] ;
long long int arr_15 [11] [11] ;
unsigned char arr_16 [11] [11] ;
int arr_17 [11] ;
int arr_21 [11] ;
int arr_24 [11] ;
unsigned long long int arr_25 [11] ;
int arr_29 [11] [11] ;
long long int arr_36 [11] ;
unsigned char arr_39 [11] [11] [11] ;
short arr_40 [11] ;
unsigned long long int arr_41 [11] [11] ;
int arr_44 [11] ;
unsigned char arr_45 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 3563930621U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (short)-12773;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = 1114709325U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_5 [i_0] = 1524175096U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (short)16370;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_7 [i_0] = 2986512238643400995LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_12 [i_0] = 6812085558231226456LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_13 [i_0] = 1795181319U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_14 [i_0] [i_1] = 13482304575103165455ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_19 [i_0] = 12848729040348124679ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_20 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)231 : (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = 5572766303537429667LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_31 [i_0] = 1042603777;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                for (size_t i_3 = 0; i_3 < 11; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 11; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 11; ++i_5) 
                            arr_35 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 1747561601230995967LL : -6974517103560239923LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_42 [i_0] = 110398814;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -443884165;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 3641908312U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? -1224872849 : -907928235;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)228 : (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 2001637403U : 2344547922U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? -7103397219896794842LL : -956438238303740928LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_15 [i_0] [i_1] = -826836412760065060LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_16 [i_0] [i_1] = (unsigned char)208;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_17 [i_0] = 1754027914;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_21 [i_0] = (i_0 % 2 == 0) ? -395577251 : -44381740;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_24 [i_0] = (i_0 % 2 == 0) ? 2049874540 : 540894094;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_25 [i_0] = (i_0 % 2 == 0) ? 11417480785588845994ULL : 14917084772222051920ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? -365098652 : -1123340964;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_36 [i_0] = (i_0 % 2 == 0) ? -489218210384298114LL : -5258950186137562744LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_39 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)203 : (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_40 [i_0] = (i_0 % 2 == 0) ? (short)-29588 : (short)13067;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_41 [i_0] [i_1] = (i_0 % 2 == 0) ? 10497753444137023831ULL : 5123758640454904125ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_44 [i_0] = (i_0 % 2 == 0) ? -1312071360 : -787016599;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? (unsigned char)244 : (unsigned char)185;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_17 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_21 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_24 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_25 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_36 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_39 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_40 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_41 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_44 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_45 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
