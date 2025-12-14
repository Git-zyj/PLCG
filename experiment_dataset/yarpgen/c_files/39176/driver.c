#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)114;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned char var_5 = (unsigned char)143;
short var_6 = (short)-4188;
long long int var_7 = 3901272895548411976LL;
unsigned char var_8 = (unsigned char)143;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 5012611914310602661ULL;
unsigned int var_11 = 2129401291U;
long long int var_12 = -8165452332255548512LL;
int zero = 0;
short var_13 = (short)11226;
short var_14 = (short)-7951;
unsigned long long int var_15 = 15872791006146171943ULL;
unsigned char var_16 = (unsigned char)130;
unsigned int var_17 = 2094761183U;
unsigned long long int var_18 = 710567528722998959ULL;
long long int var_19 = -621926263241971141LL;
unsigned char var_20 = (unsigned char)140;
unsigned long long int var_21 = 4806401291484627466ULL;
short var_22 = (short)-11281;
unsigned char var_23 = (unsigned char)163;
unsigned long long int var_24 = 6283190214523200543ULL;
unsigned char var_25 = (unsigned char)217;
unsigned short var_26 = (unsigned short)27948;
_Bool var_27 = (_Bool)1;
long long int var_28 = 1647025305520693262LL;
_Bool var_29 = (_Bool)1;
unsigned char var_30 = (unsigned char)211;
unsigned char var_31 = (unsigned char)157;
unsigned char var_32 = (unsigned char)169;
unsigned char var_33 = (unsigned char)121;
unsigned long long int arr_0 [14] ;
unsigned int arr_1 [14] ;
short arr_2 [14] ;
unsigned short arr_3 [14] [14] [14] ;
long long int arr_4 [14] [14] ;
unsigned long long int arr_5 [14] ;
signed char arr_6 [14] ;
unsigned char arr_8 [14] [14] [14] ;
unsigned long long int arr_14 [14] [14] [14] ;
short arr_17 [14] [14] [14] [14] [14] ;
signed char arr_23 [14] [14] [14] [14] ;
unsigned short arr_24 [14] [14] ;
_Bool arr_29 [14] ;
unsigned char arr_31 [14] [14] [14] ;
signed char arr_32 [10] ;
unsigned long long int arr_34 [10] ;
signed char arr_7 [14] [14] [14] ;
short arr_21 [14] [14] [14] [14] [14] [14] ;
_Bool arr_22 [14] ;
unsigned int arr_36 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 1946842001535535804ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 1747322043U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)-28665;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)22483;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = 3085050377179576384LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 10749361488352580256ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)-123;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)8 : (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 4002233644885925936ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)-29164;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (signed char)-28;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_24 [i_0] [i_1] = (unsigned short)59976;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_29 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_31 [i_0] [i_1] [i_2] = (unsigned char)69;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_32 [i_0] = (signed char)108;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_34 [i_0] = 1413745925420469368ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_0 % 2 == 0) ? (short)-4302 : (short)-16879;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_22 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_36 [i_0] [i_1] = (i_0 % 2 == 0) ? 2776158564U : 1619466041U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 14; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 14; ++i_5) 
                            hash(&seed, arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_22 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_36 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
