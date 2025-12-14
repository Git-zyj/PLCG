#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)57312;
unsigned char var_2 = (unsigned char)186;
signed char var_3 = (signed char)-47;
unsigned int var_4 = 2476013609U;
unsigned long long int var_5 = 7861283237572909590ULL;
signed char var_6 = (signed char)88;
short var_7 = (short)-6774;
unsigned char var_8 = (unsigned char)156;
unsigned short var_9 = (unsigned short)53355;
short var_11 = (short)5395;
_Bool var_12 = (_Bool)0;
int zero = 0;
_Bool var_13 = (_Bool)1;
unsigned char var_14 = (unsigned char)255;
long long int var_15 = -7026308642086315786LL;
unsigned char var_16 = (unsigned char)111;
signed char var_17 = (signed char)94;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-109;
short var_20 = (short)-3107;
long long int var_21 = -3633217520308577429LL;
short var_22 = (short)-14431;
unsigned long long int var_23 = 16720102862996460814ULL;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)26029;
unsigned short var_26 = (unsigned short)19371;
unsigned long long int var_27 = 2661337920151882364ULL;
short var_28 = (short)19001;
unsigned char var_29 = (unsigned char)176;
unsigned long long int var_30 = 6861512738363328432ULL;
unsigned char arr_0 [25] ;
unsigned char arr_2 [25] [25] ;
short arr_3 [25] ;
unsigned long long int arr_5 [25] [25] ;
unsigned long long int arr_15 [25] [25] [25] ;
short arr_16 [25] [25] [25] [25] [25] ;
unsigned long long int arr_17 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (unsigned char)29;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)7;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = (short)-23374;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_5 [i_0] [i_1] = 13644017304493054476ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = 15990369530110582260ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                for (size_t i_3 = 0; i_3 < 25; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 25; ++i_4) 
                        arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = (short)12864;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_17 [i_0] [i_1] = 6006884042097604700ULL;
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
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
