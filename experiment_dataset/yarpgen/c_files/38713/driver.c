#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)17852;
unsigned short var_2 = (unsigned short)58179;
short var_3 = (short)-3315;
unsigned long long int var_4 = 16723434031953451251ULL;
short var_5 = (short)-22290;
unsigned short var_6 = (unsigned short)1574;
short var_7 = (short)-26143;
unsigned short var_8 = (unsigned short)21344;
long long int var_9 = -8647611398057573537LL;
unsigned long long int var_10 = 12053735839251766226ULL;
int var_11 = 453462857;
signed char var_12 = (signed char)-96;
unsigned int var_15 = 3715290341U;
int zero = 0;
unsigned short var_16 = (unsigned short)29294;
signed char var_17 = (signed char)113;
int var_18 = -895275396;
long long int var_19 = 8965689491381441052LL;
long long int var_20 = 2584792304498143198LL;
int var_21 = -565477093;
unsigned char var_22 = (unsigned char)225;
unsigned char var_23 = (unsigned char)158;
unsigned int var_24 = 2773295872U;
unsigned int var_25 = 1697574675U;
unsigned char arr_2 [20] ;
signed char arr_4 [20] [20] ;
unsigned long long int arr_5 [20] [20] [20] ;
unsigned int arr_6 [20] ;
int arr_7 [20] ;
long long int arr_8 [20] [20] [20] ;
unsigned char arr_10 [20] [20] [20] ;
long long int arr_12 [20] ;
int arr_19 [20] [20] [20] [20] ;
short arr_22 [21] ;
unsigned int arr_24 [24] ;
unsigned char arr_25 [24] ;
unsigned char arr_29 [24] [24] [24] [24] ;
int arr_13 [20] [20] ;
int arr_14 [20] ;
_Bool arr_15 [20] [20] ;
long long int arr_20 [20] [20] [20] [20] ;
short arr_23 [21] ;
unsigned short arr_30 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (unsigned char)225;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)27 : (signed char)-90;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 14459111593049858209ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_6 [i_0] = 573489409U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = -1477058408;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 7005191382371653168LL : 8562807352733457526LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)106 : (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_12 [i_0] = -6360468027700318950LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_19 [i_0] [i_1] [i_2] [i_3] = (i_2 % 2 == 0) ? 323416571 : -1256024226;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_22 [i_0] = (short)16258;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_24 [i_0] = 2317886245U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_25 [i_0] = (unsigned char)158;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_29 [i_0] [i_1] [i_2] [i_3] = (unsigned char)218;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_13 [i_0] [i_1] = (i_0 % 2 == 0) ? -733719445 : 1365868024;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_14 [i_0] = (i_0 % 2 == 0) ? -841933660 : 551243937;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_15 [i_0] [i_1] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? -3252545462266251690LL : -2051001975121651004LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_23 [i_0] = (i_0 % 2 == 0) ? (short)-13789 : (short)5591;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_30 [i_0] = (unsigned short)38418;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_13 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_14 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_23 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_30 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
