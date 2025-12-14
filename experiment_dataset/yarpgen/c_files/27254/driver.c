#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)63;
unsigned int var_4 = 4212334327U;
unsigned long long int var_5 = 8897454909212283785ULL;
unsigned short var_7 = (unsigned short)59773;
long long int var_10 = 6837733795320520900LL;
unsigned char var_11 = (unsigned char)123;
unsigned int var_12 = 386921930U;
long long int var_13 = -8560748144482820071LL;
long long int var_14 = 7398151226756496943LL;
long long int var_15 = -7871358672762182840LL;
int zero = 0;
unsigned char var_16 = (unsigned char)179;
unsigned int var_17 = 1937054949U;
long long int var_18 = 2924208610771095317LL;
unsigned short var_19 = (unsigned short)37744;
unsigned short var_20 = (unsigned short)60418;
long long int var_21 = -6034118111725827060LL;
unsigned char var_22 = (unsigned char)221;
unsigned long long int var_23 = 10190620598553534963ULL;
long long int var_24 = 4640723394871508361LL;
unsigned char var_25 = (unsigned char)240;
unsigned int var_26 = 2472579732U;
unsigned int var_27 = 3867874210U;
unsigned short var_28 = (unsigned short)33469;
unsigned int var_29 = 3046222920U;
unsigned char arr_0 [16] ;
unsigned short arr_1 [16] [16] ;
long long int arr_2 [23] [23] ;
unsigned char arr_4 [23] ;
unsigned char arr_9 [10] ;
long long int arr_11 [10] [10] ;
long long int arr_20 [10] [10] [10] [10] ;
unsigned char arr_6 [23] [23] ;
unsigned long long int arr_7 [23] ;
unsigned char arr_27 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)189;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)18458;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_2 [i_0] [i_1] = -7608444969202487616LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (unsigned char)183;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_9 [i_0] = (unsigned char)89;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (i_0 % 2 == 0) ? -5791550982576301384LL : 905910998151884927LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_20 [i_0] [i_1] [i_2] [i_3] = 6852110062951041619LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned char)40;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_7 [i_0] = 15529277552786633681ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_27 [i_0] = (unsigned char)127;
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
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_27 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
