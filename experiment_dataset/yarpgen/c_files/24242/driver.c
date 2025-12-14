#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1401535832;
signed char var_2 = (signed char)-7;
signed char var_3 = (signed char)-113;
long long int var_4 = 3539619117495014680LL;
_Bool var_8 = (_Bool)0;
int var_10 = 1073018433;
int var_11 = -905598789;
long long int var_12 = -6156211238345896981LL;
unsigned char var_13 = (unsigned char)191;
unsigned short var_14 = (unsigned short)5100;
int zero = 0;
unsigned short var_16 = (unsigned short)44320;
unsigned short var_17 = (unsigned short)49823;
unsigned short var_18 = (unsigned short)48417;
unsigned int var_19 = 597038659U;
_Bool var_20 = (_Bool)1;
long long int var_21 = -2946757547100455847LL;
unsigned int var_22 = 3098692527U;
int var_23 = 14953228;
unsigned char var_24 = (unsigned char)79;
unsigned long long int var_25 = 4005446570678367257ULL;
short var_26 = (short)19503;
unsigned char var_27 = (unsigned char)193;
_Bool var_28 = (_Bool)1;
short var_29 = (short)-28274;
short var_30 = (short)31986;
_Bool var_31 = (_Bool)1;
unsigned int var_32 = 3108039928U;
signed char arr_0 [10] ;
short arr_4 [10] [10] ;
signed char arr_5 [10] ;
short arr_7 [16] [16] ;
unsigned long long int arr_8 [16] [16] ;
unsigned char arr_9 [17] ;
signed char arr_10 [17] [17] ;
unsigned char arr_11 [17] ;
unsigned char arr_13 [17] [17] [17] ;
int arr_15 [17] [17] ;
int arr_16 [17] ;
_Bool arr_17 [17] [17] [17] ;
unsigned int arr_21 [17] [17] [17] [17] ;
long long int arr_23 [17] [17] ;
unsigned long long int arr_24 [17] [17] [17] [17] [17] ;
short arr_6 [10] ;
unsigned int arr_12 [17] ;
unsigned int arr_28 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (signed char)-13;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-18654;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = (signed char)112;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-23569;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 5195090148722959368ULL : 3264795005513262826ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_9 [i_0] = (unsigned char)104;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_10 [i_0] [i_1] = (signed char)79;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (unsigned char)79;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (unsigned char)152;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_15 [i_0] [i_1] = 46313799;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_16 [i_0] = 968377248;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    arr_21 [i_0] [i_1] [i_2] [i_3] = 3095910044U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_23 [i_0] [i_1] = -1495033853821206177LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_24 [i_0] [i_1] [i_2] [i_3] [i_4] = 12255850019367664942ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (short)23082;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_12 [i_0] = 3354744052U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_28 [i_0] = (i_0 % 2 == 0) ? 679636091U : 2700352719U;
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_28 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
