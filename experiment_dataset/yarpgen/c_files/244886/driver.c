#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-22263;
long long int var_1 = -9211589341244899616LL;
unsigned long long int var_2 = 11521595136346766193ULL;
unsigned long long int var_5 = 10134511328822074853ULL;
unsigned long long int var_6 = 10200846717950589749ULL;
short var_9 = (short)12379;
signed char var_10 = (signed char)43;
short var_12 = (short)25164;
long long int var_13 = -1972179295198372045LL;
long long int var_15 = -2340267823488062713LL;
long long int var_16 = -419518176402533055LL;
int var_17 = -840898494;
long long int var_18 = -8298284209226661944LL;
int zero = 0;
long long int var_19 = 1783864996179445623LL;
long long int var_20 = 6674187135565486869LL;
unsigned char var_21 = (unsigned char)167;
short var_22 = (short)9249;
long long int var_23 = -3568615875216706702LL;
short var_24 = (short)28052;
unsigned char var_25 = (unsigned char)215;
long long int var_26 = -4486162013997325821LL;
unsigned long long int var_27 = 6226218341157226947ULL;
unsigned long long int var_28 = 13198040249673344155ULL;
short var_29 = (short)5559;
_Bool var_30 = (_Bool)0;
signed char var_31 = (signed char)100;
int var_32 = -2106375464;
long long int var_33 = -8857833630713154634LL;
short var_34 = (short)14455;
short var_35 = (short)-30455;
unsigned char var_36 = (unsigned char)174;
int var_37 = 2075065255;
unsigned long long int var_38 = 495278536293006560ULL;
int var_39 = 779084311;
short var_40 = (short)13654;
short var_41 = (short)15485;
long long int var_42 = -8212185673661875694LL;
_Bool var_43 = (_Bool)0;
unsigned short var_44 = (unsigned short)20795;
short var_45 = (short)-30848;
long long int arr_0 [24] ;
short arr_2 [24] ;
short arr_5 [24] [24] [24] ;
unsigned long long int arr_6 [24] ;
_Bool arr_7 [24] [24] ;
unsigned int arr_8 [24] [24] ;
unsigned char arr_10 [24] ;
long long int arr_11 [24] ;
long long int arr_12 [24] ;
short arr_19 [24] [24] [24] ;
unsigned long long int arr_28 [24] [24] [24] [24] ;
long long int arr_39 [24] [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -6785670723496459130LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)3337;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-22867;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 17072955652331839911ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_8 [i_0] [i_1] = 1168245788U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = (unsigned char)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_11 [i_0] = -8912734687807564983LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = -7553890345612221288LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = (short)-7288;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = 15081423002911818384ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? -3724023208175877596LL : 6561315197917175220LL;
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
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            hash(&seed, arr_39 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
