#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30525;
unsigned int var_1 = 3397343889U;
unsigned int var_2 = 2197174843U;
unsigned int var_3 = 2033190064U;
signed char var_4 = (signed char)-25;
signed char var_5 = (signed char)-7;
unsigned char var_6 = (unsigned char)114;
unsigned int var_7 = 2313191891U;
unsigned int var_8 = 2328073869U;
short var_9 = (short)17667;
unsigned int var_10 = 2726077163U;
unsigned char var_11 = (unsigned char)113;
unsigned char var_12 = (unsigned char)181;
unsigned char var_13 = (unsigned char)197;
short var_14 = (short)22654;
signed char var_15 = (signed char)-77;
unsigned char var_16 = (unsigned char)245;
int zero = 0;
unsigned int var_17 = 1680134445U;
signed char var_18 = (signed char)67;
signed char var_19 = (signed char)74;
unsigned char var_20 = (unsigned char)67;
unsigned int var_21 = 2035190969U;
signed char var_22 = (signed char)-11;
signed char var_23 = (signed char)-41;
signed char var_24 = (signed char)120;
short var_25 = (short)29839;
unsigned int var_26 = 2093621499U;
unsigned int var_27 = 3598594217U;
signed char var_28 = (signed char)-28;
unsigned int var_29 = 1059543780U;
short var_30 = (short)-12626;
short var_31 = (short)-29483;
signed char var_32 = (signed char)9;
unsigned int var_33 = 2434538256U;
short var_34 = (short)-6474;
unsigned char var_35 = (unsigned char)210;
short var_36 = (short)-12030;
unsigned char arr_31 [19] [19] ;
unsigned char arr_37 [19] [19] [19] ;
unsigned int arr_38 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_31 [i_0] [i_1] = (unsigned char)156;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                arr_37 [i_0] [i_1] [i_2] = (unsigned char)125;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_38 [i_0] [i_1] [i_2] [i_3] = 3462702822U;
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
    hash(&seed, var_36);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            hash(&seed, arr_31 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                hash(&seed, arr_37 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    hash(&seed, arr_38 [i_0] [i_1] [i_2] [i_3] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
