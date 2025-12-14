#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -190379355427110705LL;
unsigned char var_3 = (unsigned char)198;
unsigned long long int var_5 = 5584103886648468940ULL;
unsigned short var_6 = (unsigned short)31465;
unsigned long long int var_7 = 1051776065257006004ULL;
short var_8 = (short)-18340;
unsigned char var_9 = (unsigned char)148;
int var_11 = 275087169;
int var_12 = -454675168;
int zero = 0;
unsigned char var_15 = (unsigned char)8;
unsigned long long int var_16 = 16493784496765739349ULL;
unsigned int var_17 = 1460924400U;
unsigned short var_18 = (unsigned short)42712;
unsigned short var_19 = (unsigned short)9784;
unsigned int var_20 = 4272789034U;
unsigned int var_21 = 1932259312U;
signed char var_22 = (signed char)-46;
unsigned int var_23 = 2506364339U;
unsigned int var_24 = 3245429027U;
unsigned int var_25 = 2629431359U;
unsigned short arr_0 [10] ;
unsigned long long int arr_1 [10] ;
unsigned int arr_2 [10] [10] [10] ;
long long int arr_4 [10] ;
unsigned char arr_5 [10] [10] [10] ;
unsigned int arr_7 [10] ;
signed char arr_10 [10] ;
int arr_12 [16] ;
long long int arr_13 [16] ;
unsigned short arr_6 [10] [10] [10] ;
short arr_11 [10] ;
unsigned char arr_14 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned short)26354;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 16473332088823595626ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1123121996U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 1778042602561355666LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)253;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = 115679089U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (signed char)-48;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = -542261617;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_13 [i_0] = 6617640838057079677LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)53466;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)20128 : (short)-17474;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned char)233;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_6 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_14 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
