#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)164;
unsigned int var_1 = 2058586553U;
unsigned int var_2 = 76192958U;
unsigned short var_5 = (unsigned short)29109;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)51;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 9364304402443656974ULL;
unsigned int var_11 = 3884205108U;
int zero = 0;
unsigned int var_13 = 920103353U;
signed char var_14 = (signed char)89;
signed char var_15 = (signed char)71;
long long int var_16 = 3959667048533651270LL;
int var_17 = 850062185;
unsigned long long int var_18 = 14170984973144083779ULL;
signed char var_19 = (signed char)64;
unsigned short var_20 = (unsigned short)18243;
signed char var_21 = (signed char)46;
int var_22 = -341334154;
int var_23 = 892776684;
short var_24 = (short)-30454;
unsigned short var_25 = (unsigned short)20558;
unsigned short var_26 = (unsigned short)11100;
unsigned long long int var_27 = 13593078452864128356ULL;
unsigned char var_28 = (unsigned char)247;
short var_29 = (short)16119;
unsigned long long int var_30 = 9407203307627233721ULL;
int var_31 = -1101440317;
short var_32 = (short)29672;
unsigned short var_33 = (unsigned short)29126;
signed char var_34 = (signed char)100;
unsigned char var_35 = (unsigned char)89;
short var_36 = (short)14448;
short var_37 = (short)23555;
signed char var_38 = (signed char)25;
unsigned int var_39 = 69098938U;
unsigned short var_40 = (unsigned short)18015;
short var_41 = (short)11669;
unsigned int var_42 = 2449409583U;
signed char arr_0 [15] ;
unsigned long long int arr_1 [15] ;
long long int arr_2 [15] ;
short arr_3 [16] ;
short arr_4 [16] [16] ;
unsigned int arr_7 [10] ;
unsigned char arr_10 [10] [10] [10] ;
unsigned char arr_12 [10] [10] [10] ;
signed char arr_13 [10] [10] [10] ;
unsigned char arr_14 [10] [10] [10] ;
unsigned char arr_17 [10] [10] [10] [10] ;
unsigned char arr_18 [10] [10] ;
long long int arr_19 [10] [10] ;
unsigned char arr_24 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-113;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 8683633308626562383ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -5691499753877620840LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)-23874;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (short)-4486;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 2522776747U : 3914719708U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = (unsigned char)100;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_13 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (signed char)-1 : (signed char)66;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)48 : (unsigned char)27;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_17 [i_0] [i_1] [i_2] [i_3] = (unsigned char)78;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_18 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)47 : (unsigned char)14;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_19 [i_0] [i_1] = (i_0 % 2 == 0) ? -8844928804143930920LL : 3247545510544482781LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_24 [i_0] [i_1] [i_2] = (unsigned char)154;
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
    hash(&seed, var_34);
    hash(&seed, var_35);
    hash(&seed, var_36);
    hash(&seed, var_37);
    hash(&seed, var_38);
    hash(&seed, var_39);
    hash(&seed, var_40);
    hash(&seed, var_41);
    hash(&seed, var_42);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
