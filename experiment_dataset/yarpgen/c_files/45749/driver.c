#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6405;
unsigned long long int var_2 = 17804344786308499240ULL;
_Bool var_3 = (_Bool)1;
int var_5 = 1386396615;
short var_6 = (short)1891;
unsigned int var_8 = 159570735U;
unsigned short var_9 = (unsigned short)43795;
int var_11 = 1024885389;
unsigned int var_12 = 3709467888U;
unsigned char var_13 = (unsigned char)9;
unsigned int var_14 = 4208192108U;
unsigned long long int var_15 = 9260600241279878360ULL;
long long int var_16 = 7774012063719975640LL;
int zero = 0;
unsigned short var_17 = (unsigned short)52296;
unsigned int var_18 = 2016136633U;
_Bool var_19 = (_Bool)0;
unsigned char var_20 = (unsigned char)145;
_Bool var_21 = (_Bool)0;
int var_22 = -1793165353;
short var_23 = (short)-20712;
unsigned short var_24 = (unsigned short)46003;
long long int var_25 = -4819101364437375386LL;
signed char var_26 = (signed char)60;
signed char var_27 = (signed char)-124;
unsigned char arr_0 [23] [23] ;
long long int arr_1 [23] ;
unsigned char arr_7 [17] [17] ;
unsigned short arr_8 [17] ;
unsigned short arr_9 [17] [17] [17] ;
unsigned long long int arr_17 [17] [17] [17] [17] [17] ;
long long int arr_5 [23] ;
unsigned int arr_26 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = -8468542347361662849LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_7 [i_0] [i_1] = (unsigned char)109;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_8 [i_0] = (unsigned short)10867;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned short)51792;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                for (size_t i_3 = 0; i_3 < 17; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 17; ++i_4) 
                        arr_17 [i_0] [i_1] [i_2] [i_3] [i_4] = 9627242688772418539ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 1761965100729735270LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_26 [i_0] = (i_0 % 2 == 0) ? 2815544179U : 4047596610U;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_26 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
