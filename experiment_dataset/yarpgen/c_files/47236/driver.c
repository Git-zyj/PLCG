#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 750663471U;
signed char var_1 = (signed char)26;
unsigned long long int var_3 = 6995915833408386471ULL;
signed char var_4 = (signed char)81;
signed char var_5 = (signed char)86;
signed char var_6 = (signed char)69;
signed char var_7 = (signed char)8;
unsigned char var_8 = (unsigned char)73;
signed char var_9 = (signed char)-58;
int var_10 = -1523288651;
int zero = 0;
unsigned short var_11 = (unsigned short)14518;
long long int var_12 = -1684691662578179067LL;
int var_13 = 318797383;
signed char var_14 = (signed char)-111;
long long int var_15 = -5186094566140428624LL;
unsigned short var_16 = (unsigned short)40638;
unsigned short var_17 = (unsigned short)27830;
long long int var_18 = 5795960746371827109LL;
signed char var_19 = (signed char)-36;
unsigned short var_20 = (unsigned short)38802;
unsigned short var_21 = (unsigned short)29391;
int var_22 = -345906375;
long long int var_23 = -6017338717136990021LL;
signed char var_24 = (signed char)78;
int var_25 = -995166382;
unsigned int var_26 = 4184537075U;
unsigned int var_27 = 14677240U;
signed char var_28 = (signed char)78;
unsigned long long int var_29 = 15737400623737708788ULL;
unsigned char var_30 = (unsigned char)87;
unsigned char var_31 = (unsigned char)243;
signed char var_32 = (signed char)25;
unsigned short var_33 = (unsigned short)63711;
unsigned int var_34 = 3615056741U;
signed char var_35 = (signed char)119;
signed char arr_0 [16] ;
unsigned int arr_1 [16] [16] ;
unsigned int arr_3 [16] ;
long long int arr_4 [16] [16] ;
signed char arr_5 [16] [16] [16] ;
unsigned int arr_7 [16] ;
long long int arr_11 [16] [16] [16] ;
long long int arr_12 [16] [16] [16] ;
unsigned short arr_23 [16] [16] [16] [16] ;
unsigned int arr_28 [16] [16] [16] [16] ;
unsigned int arr_39 [20] [20] [20] [20] ;
long long int arr_29 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = 2772909121U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 3753323906U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = -8750945186795756320LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)-53;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_7 [i_0] = 15861714U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_11 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -4688966840717128799LL : 8013540503398097403LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? -4554958916011056600LL : -3391939123266303699LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_23 [i_0] [i_1] [i_2] [i_3] = (unsigned short)49549;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                for (size_t i_3 = 0; i_3 < 16; ++i_3) 
                    arr_28 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? 1692074753U : 4250951780U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                for (size_t i_3 = 0; i_3 < 20; ++i_3) 
                    arr_39 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 42088436U : 2437403458U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_29 [i_0] [i_1] = (i_1 % 2 == 0) ? -1673478392119915781LL : 3114247411289256443LL;
}

void checksum() {
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
    hash(&seed, var_33);
    hash(&seed, var_34);
    hash(&seed, var_35);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_29 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
