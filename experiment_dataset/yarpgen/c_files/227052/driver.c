#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11104579672638290598ULL;
short var_4 = (short)-26094;
short var_6 = (short)8990;
unsigned short var_7 = (unsigned short)21814;
unsigned short var_9 = (unsigned short)17271;
unsigned short var_11 = (unsigned short)40550;
unsigned long long int var_12 = 6055824588542371380ULL;
unsigned long long int var_14 = 8257279641526809438ULL;
unsigned short var_15 = (unsigned short)32094;
int zero = 0;
unsigned short var_17 = (unsigned short)3324;
unsigned long long int var_18 = 4290869106108716334ULL;
long long int var_19 = -2804121199886690249LL;
unsigned long long int var_20 = 8409450948490289238ULL;
short var_21 = (short)23582;
short var_22 = (short)18860;
long long int var_23 = -253892602236699348LL;
long long int var_24 = 2481734364247248430LL;
int var_25 = -2008525715;
long long int var_26 = 8240413914476611300LL;
unsigned short arr_2 [24] [24] ;
unsigned long long int arr_3 [24] [24] ;
unsigned long long int arr_4 [24] [24] ;
unsigned long long int arr_5 [24] [24] [24] ;
unsigned short arr_12 [24] [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)9966;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_3 [i_0] [i_1] = 14474673586959585316ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = 15187264582887870411ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? 10056945473740407047ULL : 16267647109668749544ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (unsigned short)45375;
}

void checksum() {
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
