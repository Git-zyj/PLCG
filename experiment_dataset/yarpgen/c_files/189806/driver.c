#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1859317533426859146ULL;
unsigned long long int var_1 = 6246188183336009045ULL;
signed char var_2 = (signed char)74;
unsigned short var_3 = (unsigned short)26825;
unsigned long long int var_4 = 2462703961166192532ULL;
unsigned long long int var_5 = 13352621399268184471ULL;
short var_6 = (short)2107;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)34;
unsigned int var_9 = 2734672785U;
unsigned int var_10 = 3405694059U;
short var_11 = (short)-11222;
unsigned long long int var_12 = 5335230444866470905ULL;
unsigned long long int var_13 = 11094293957957161725ULL;
_Bool var_15 = (_Bool)0;
short var_16 = (short)32243;
unsigned short var_17 = (unsigned short)8596;
short var_18 = (short)-22255;
int zero = 0;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)26359;
unsigned int var_22 = 4282304690U;
int var_23 = -1471898661;
unsigned long long int var_24 = 17703012008714526648ULL;
unsigned int var_25 = 1475522386U;
unsigned int var_26 = 1140472607U;
unsigned long long int var_27 = 16764744271524317509ULL;
_Bool var_28 = (_Bool)1;
short var_29 = (short)7919;
signed char var_30 = (signed char)11;
unsigned long long int var_31 = 8751706129384777019ULL;
int var_32 = -1166723336;
short var_33 = (short)-13883;
unsigned long long int var_34 = 6927569138026912477ULL;
short var_35 = (short)-19405;
unsigned int var_36 = 1011321800U;
long long int var_37 = -1674990907914533437LL;
signed char var_38 = (signed char)16;
signed char var_39 = (signed char)-83;
unsigned long long int var_40 = 3809674411658856468ULL;
long long int var_41 = -7831175504855206966LL;
unsigned int var_42 = 4089238850U;
unsigned int var_43 = 924037099U;
unsigned int var_44 = 154463455U;
unsigned int var_45 = 3067109460U;
unsigned int var_46 = 3129506939U;
unsigned char var_47 = (unsigned char)20;
long long int var_48 = 8645968818531510251LL;
unsigned long long int arr_1 [18] ;
short arr_2 [18] ;
unsigned int arr_3 [18] [18] [18] ;
unsigned char arr_4 [18] [18] ;
short arr_5 [18] [18] ;
long long int arr_7 [18] [18] ;
unsigned char arr_8 [18] [18] [18] ;
unsigned long long int arr_10 [18] [18] [18] [18] ;
unsigned long long int arr_11 [18] ;
short arr_12 [18] [18] [18] [18] [18] [18] ;
short arr_13 [18] [18] [18] [18] [18] [18] ;
int arr_14 [18] [18] [18] [18] [18] ;
short arr_17 [18] [18] [18] [18] ;
signed char arr_21 [18] [18] ;
unsigned int arr_22 [18] [18] ;
unsigned int arr_24 [18] [18] [18] [18] [18] ;
unsigned long long int arr_25 [18] [18] [18] [18] [18] ;
unsigned int arr_29 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 6178339522730636575ULL : 1616991861277739467ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (short)-15366 : (short)-28316;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2542262998U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)239;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)-14999 : (short)-31062;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? 5363286645098295162LL : 6946360154395086047LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)144 : (unsigned char)61;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_10 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 864226101632261369ULL : 12867927893328753089ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? 508015675923285592ULL : 14495917576682610969ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)16412;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 18; ++i_5) 
                            arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (short)-10645;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_0 % 2 == 0) ? -1903022542 : 302247560;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (short)-26898;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_21 [i_0] [i_1] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_22 [i_0] [i_1] = (i_0 % 2 == 0) ? 1612974188U : 1811263641U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = 297487424U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 18; ++i_4) 
                        arr_25 [i_0] [i_1] [i_2] [i_3] [i_4] = 1534483027975981034ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_29 [i_0] [i_1] = 4086077041U;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
