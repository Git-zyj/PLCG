#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8708;
short var_2 = (short)-5220;
short var_3 = (short)21349;
signed char var_4 = (signed char)73;
unsigned short var_6 = (unsigned short)24610;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)194;
long long int var_9 = -9023477594165283363LL;
unsigned long long int var_10 = 16243942818644573002ULL;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 16848577743236789563ULL;
short var_13 = (short)3874;
unsigned long long int var_14 = 14840327825875353181ULL;
unsigned int var_15 = 2455425749U;
unsigned short var_16 = (unsigned short)51595;
int zero = 0;
unsigned long long int var_17 = 622885479351418410ULL;
unsigned char var_18 = (unsigned char)196;
unsigned int var_19 = 2816986698U;
unsigned long long int var_20 = 8799214771038491619ULL;
int var_21 = -915874439;
short var_22 = (short)-6867;
unsigned long long int var_23 = 2853950787954703181ULL;
unsigned short var_24 = (unsigned short)33783;
long long int var_25 = -4273448387472526441LL;
unsigned int var_26 = 2184091214U;
_Bool var_27 = (_Bool)0;
int var_28 = 1812715301;
unsigned short var_29 = (unsigned short)64645;
_Bool var_30 = (_Bool)0;
_Bool var_31 = (_Bool)1;
signed char var_32 = (signed char)95;
short var_33 = (short)-3062;
_Bool var_34 = (_Bool)1;
short var_35 = (short)-8738;
signed char arr_0 [20] ;
unsigned short arr_1 [20] ;
unsigned long long int arr_3 [20] ;
short arr_5 [24] [24] ;
unsigned short arr_6 [24] ;
int arr_17 [24] [24] [24] [24] ;
short arr_19 [24] [24] [24] [24] [24] ;
unsigned int arr_20 [24] [24] [24] [24] [24] [24] ;
unsigned int arr_22 [24] [24] ;
unsigned long long int arr_4 [20] ;
unsigned short arr_7 [24] [24] ;
unsigned long long int arr_8 [24] ;
_Bool arr_23 [24] [24] [24] ;
unsigned short arr_31 [24] [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)95 : (signed char)24;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned short)5188;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 3814448104036193719ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)23083 : (short)2075;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = (unsigned short)64266;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = -2112103847;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_19 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)14964;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 24; ++i_5) 
                            arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = 1244458995U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_22 [i_0] [i_1] = 4081007797U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 13858664578682341829ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)49570 : (unsigned short)54595;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? 12954795511944483259ULL : 6015669811474057771ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_23 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? (unsigned short)48061 : (unsigned short)40560;
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
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_7 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_23 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_31 [i_0] [i_1] [i_2] [i_3] [i_4] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
