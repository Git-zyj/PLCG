#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)25583;
unsigned long long int var_1 = 1005522135912746117ULL;
long long int var_2 = -8566996737687736786LL;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)116;
short var_6 = (short)-10512;
unsigned char var_7 = (unsigned char)148;
signed char var_8 = (signed char)107;
unsigned long long int var_9 = 8976284477525678057ULL;
int zero = 0;
long long int var_10 = -8739361353954679209LL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 16018272972103060584ULL;
unsigned short var_13 = (unsigned short)42542;
unsigned short var_14 = (unsigned short)59247;
short var_15 = (short)-4060;
unsigned char var_16 = (unsigned char)58;
long long int var_17 = 8336839670389543241LL;
short var_18 = (short)-25623;
unsigned int var_19 = 786354133U;
signed char var_20 = (signed char)63;
unsigned short var_21 = (unsigned short)21982;
signed char var_22 = (signed char)13;
unsigned short var_23 = (unsigned short)38018;
unsigned int var_24 = 850594120U;
_Bool var_25 = (_Bool)1;
unsigned int var_26 = 2477621470U;
_Bool var_27 = (_Bool)1;
_Bool var_28 = (_Bool)0;
_Bool var_29 = (_Bool)1;
unsigned long long int var_30 = 1165531605624189024ULL;
_Bool var_31 = (_Bool)0;
_Bool var_32 = (_Bool)1;
short arr_0 [22] ;
unsigned long long int arr_1 [22] ;
signed char arr_4 [22] [22] ;
signed char arr_5 [22] [22] [22] ;
long long int arr_6 [22] [22] [22] [22] ;
signed char arr_7 [22] [22] ;
int arr_8 [22] [22] [22] [22] ;
signed char arr_9 [22] [22] [22] ;
unsigned long long int arr_10 [22] ;
unsigned short arr_11 [22] [22] [22] [22] [22] [22] [22] ;
unsigned long long int arr_12 [22] [22] [22] [22] [22] [22] ;
long long int arr_19 [12] [12] [12] ;
signed char arr_20 [12] ;
signed char arr_21 [12] [12] ;
_Bool arr_30 [12] [12] [12] ;
unsigned int arr_42 [22] [22] [22] [22] ;
signed char arr_45 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (short)-18876 : (short)-6011;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 10726043197719914250ULL : 8428092222976763456ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? (signed char)46 : (signed char)124;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4191228435083376317LL : 1976630935406699700LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_7 [i_0] [i_1] = (signed char)14;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_8 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? -208675166 : -121793688;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (signed char)-82;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_10 [i_0] = 6279907750202602816ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            for (size_t i_6 = 0; i_6 < 22; ++i_6) 
                                arr_11 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] [i_6] = (unsigned short)40687;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 22; ++i_5) 
                            arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (i_3 % 2 == 0) ? 1437774463129675330ULL : 6053996291975173984ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_19 [i_0] [i_1] [i_2] = -3027223584053267787LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_20 [i_0] = (signed char)-83;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_21 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)10 : (signed char)-71;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_30 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    arr_42 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 4145851673U : 94534239U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_45 [i_0] = (i_0 % 2 == 0) ? (signed char)-86 : (signed char)-59;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
