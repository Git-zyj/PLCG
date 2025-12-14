#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)29982;
unsigned char var_3 = (unsigned char)67;
unsigned short var_6 = (unsigned short)53428;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)157;
long long int var_12 = 8790928420415978478LL;
unsigned short var_17 = (unsigned short)51230;
int zero = 0;
unsigned short var_18 = (unsigned short)10266;
unsigned short var_19 = (unsigned short)24777;
unsigned short var_20 = (unsigned short)59314;
unsigned short var_21 = (unsigned short)4686;
unsigned short var_22 = (unsigned short)37217;
int var_23 = -1130333145;
unsigned short var_24 = (unsigned short)24767;
int var_25 = -1293538242;
int var_26 = -237493163;
unsigned char var_27 = (unsigned char)246;
long long int var_28 = -6937110974583999417LL;
_Bool var_29 = (_Bool)1;
int var_30 = -1688189630;
int var_31 = -1240939158;
unsigned char arr_0 [13] ;
int arr_1 [13] [13] ;
long long int arr_3 [13] ;
long long int arr_6 [21] [21] ;
_Bool arr_7 [21] ;
unsigned char arr_10 [24] [24] ;
unsigned char arr_12 [24] ;
unsigned short arr_16 [24] [24] [24] [24] ;
unsigned char arr_5 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = (unsigned char)35;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_1 [i_0] [i_1] = -397988634;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 6880429390382893375LL : -3482272878655258114LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_6 [i_0] [i_1] = 1359143411304999818LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_10 [i_0] [i_1] = (unsigned char)188;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_12 [i_0] = (unsigned char)230;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_16 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? (unsigned short)52867 : (unsigned short)40741;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)100 : (unsigned char)204;
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
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
