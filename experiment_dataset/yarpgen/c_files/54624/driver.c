#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15284301862292771496ULL;
unsigned long long int var_1 = 9893568648102191725ULL;
unsigned long long int var_2 = 3078813856313732560ULL;
unsigned long long int var_3 = 1584775798447737272ULL;
unsigned short var_4 = (unsigned short)38001;
unsigned short var_5 = (unsigned short)61660;
unsigned long long int var_7 = 14386890320622937664ULL;
unsigned long long int var_8 = 10951014497793349187ULL;
unsigned short var_9 = (unsigned short)50539;
unsigned long long int var_10 = 14110585941522848746ULL;
unsigned long long int var_11 = 950852445543716900ULL;
unsigned long long int var_12 = 9854632496229892143ULL;
unsigned long long int var_14 = 17338859422016170440ULL;
int zero = 0;
unsigned long long int var_15 = 2704417208258562510ULL;
unsigned long long int var_16 = 13938823080593970982ULL;
unsigned long long int var_17 = 10043108552491827289ULL;
unsigned long long int var_18 = 4670596766208761854ULL;
unsigned long long int var_19 = 1531310060098569140ULL;
unsigned long long int var_20 = 3516710463739550107ULL;
unsigned long long int var_21 = 6575432018980098855ULL;
unsigned long long int var_22 = 16515410150862042344ULL;
unsigned long long int var_23 = 17189777127462706731ULL;
unsigned long long int var_24 = 1322078903284265279ULL;
unsigned long long int var_25 = 18201007579405176748ULL;
unsigned long long int var_26 = 5492808347744830564ULL;
unsigned short var_27 = (unsigned short)7190;
unsigned long long int var_28 = 5383095527385533879ULL;
unsigned long long int var_29 = 16995112512893137002ULL;
unsigned long long int var_30 = 3386742024738886740ULL;
unsigned long long int var_31 = 11728570353635946843ULL;
unsigned long long int var_32 = 15291653450615360128ULL;
unsigned long long int var_33 = 6157913032937667131ULL;
unsigned long long int var_34 = 7737023794316007793ULL;
unsigned long long int arr_0 [21] ;
unsigned short arr_1 [21] ;
unsigned long long int arr_8 [21] ;
unsigned long long int arr_11 [21] [21] [21] ;
unsigned long long int arr_16 [21] [21] [21] ;
unsigned long long int arr_18 [21] [21] [21] [21] ;
unsigned long long int arr_25 [21] [21] [21] [21] ;
unsigned short arr_31 [21] [21] [21] [21] [21] [21] ;
unsigned short arr_9 [21] ;
unsigned short arr_10 [21] [21] [21] ;
unsigned long long int arr_14 [21] [21] [21] ;
unsigned long long int arr_23 [21] [21] [21] [21] [21] ;
unsigned long long int arr_27 [21] ;
unsigned long long int arr_28 [21] [21] [21] ;
unsigned long long int arr_33 [21] [21] ;
unsigned long long int arr_44 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = 3318664084037691283ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (unsigned short)24031;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_8 [i_0] = 9174742541305369627ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = 12333812174908829398ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_16 [i_0] [i_1] [i_2] = 17231426110723787388ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_18 [i_0] [i_1] [i_2] [i_3] = 4363892967959256020ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    arr_25 [i_0] [i_1] [i_2] [i_3] = 4752129690958341586ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 21; ++i_5) 
                            arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)61271;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_9 [i_0] = (unsigned short)26352;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned short)24296;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 8488612308294816010ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] = 17542809100529203501ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_27 [i_0] = 17943774410923135256ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_28 [i_0] [i_1] [i_2] = 5492990080468651259ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_33 [i_0] [i_1] = 15448402386391698897ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_44 [i_0] = 8539206941673818848ULL;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_14 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                for (size_t i_3 = 0; i_3 < 21; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 21; ++i_4) 
                        hash(&seed, arr_23 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_27 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_28 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_33 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_44 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
