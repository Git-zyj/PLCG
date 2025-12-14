#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -738668645;
long long int var_1 = 6287331138746988818LL;
short var_2 = (short)-18349;
unsigned char var_4 = (unsigned char)241;
unsigned short var_5 = (unsigned short)14700;
long long int var_6 = -596122670726388630LL;
short var_7 = (short)4739;
long long int var_8 = -4713436430816279322LL;
signed char var_9 = (signed char)121;
unsigned long long int var_10 = 7023686254544502298ULL;
unsigned int var_11 = 2833809981U;
unsigned long long int var_14 = 12505173502559627969ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned long long int var_16 = 4002088841316176669ULL;
long long int var_17 = 3871547034762768814LL;
short var_18 = (short)23560;
long long int var_19 = -5383756051529699980LL;
signed char var_20 = (signed char)-72;
unsigned int var_21 = 2748966235U;
signed char var_22 = (signed char)113;
_Bool var_23 = (_Bool)1;
signed char var_24 = (signed char)63;
long long int var_25 = -38471279136637127LL;
unsigned int var_26 = 4063306015U;
unsigned short var_27 = (unsigned short)37585;
_Bool var_28 = (_Bool)0;
int var_29 = 2143375517;
short var_30 = (short)12853;
unsigned int var_31 = 418264151U;
signed char var_32 = (signed char)-45;
unsigned long long int var_33 = 2854797592692496276ULL;
unsigned short var_34 = (unsigned short)24477;
unsigned int var_35 = 3804352608U;
long long int var_36 = -8870580505142217076LL;
unsigned char arr_1 [22] ;
_Bool arr_5 [23] ;
unsigned int arr_6 [24] ;
signed char arr_7 [24] [24] ;
_Bool arr_8 [24] ;
unsigned short arr_9 [24] ;
unsigned long long int arr_10 [24] ;
unsigned short arr_12 [24] [24] ;
unsigned short arr_17 [24] [24] [24] [24] ;
signed char arr_22 [24] [24] ;
unsigned char arr_3 [22] [22] ;
int arr_20 [24] [24] [24] [24] [24] ;
unsigned short arr_26 [24] [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (unsigned char)131;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 1601762910U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)86;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_9 [i_0] = (unsigned short)38303;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_10 [i_0] = 1536273086785089768ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_12 [i_0] [i_1] = (unsigned short)32704;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned short)37570;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_22 [i_0] [i_1] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)88;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? -470111882 : 856497745;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_26 [i_0] [i_1] [i_2] [i_3] = (unsigned short)27923;
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
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 24; ++i_4) 
                        hash(&seed, arr_20 [i_0] [i_1] [i_2] [i_3] [i_4] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    hash(&seed, arr_26 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
