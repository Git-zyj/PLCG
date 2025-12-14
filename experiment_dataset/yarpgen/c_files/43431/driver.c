#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5112;
unsigned int var_1 = 893572726U;
unsigned short var_2 = (unsigned short)34344;
unsigned char var_3 = (unsigned char)42;
int var_4 = 1946920766;
unsigned int var_6 = 2919108090U;
long long int var_7 = -4557774604521979344LL;
long long int var_8 = 5448486598865558872LL;
unsigned int var_9 = 704385887U;
unsigned short var_10 = (unsigned short)31690;
unsigned long long int var_11 = 6365785036421850384ULL;
unsigned int var_12 = 1587931669U;
signed char var_13 = (signed char)-78;
unsigned char var_14 = (unsigned char)251;
long long int var_15 = -1610056493808057098LL;
int var_16 = 979007188;
unsigned short var_17 = (unsigned short)52192;
int var_18 = -457532535;
unsigned short var_19 = (unsigned short)45868;
int zero = 0;
unsigned int var_20 = 2646258357U;
unsigned int var_21 = 1647367903U;
unsigned int var_22 = 2379052626U;
unsigned short var_23 = (unsigned short)50920;
int var_24 = -227948061;
unsigned int var_25 = 1353118534U;
unsigned long long int var_26 = 12244408783304770913ULL;
int var_27 = -1665912966;
unsigned long long int var_28 = 2904732465178240662ULL;
short var_29 = (short)15884;
long long int arr_0 [20] ;
unsigned char arr_1 [20] ;
unsigned int arr_2 [20] ;
long long int arr_6 [12] ;
unsigned short arr_7 [12] [12] ;
unsigned short arr_11 [21] [21] ;
unsigned char arr_13 [21] ;
int arr_14 [21] ;
unsigned long long int arr_3 [20] ;
int arr_4 [20] [20] ;
long long int arr_8 [12] [12] ;
int arr_9 [12] ;
short arr_10 [12] ;
unsigned int arr_15 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 5686875019001982354LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (unsigned char)234;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 2627663521U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_6 [i_0] = -550376534050669280LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)55068 : (unsigned short)29748;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned short)13565;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_13 [i_0] = (unsigned char)143;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_14 [i_0] = -357832110;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = 10964981910462929663ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = -1135145106;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 5175479912518473889LL : -7422424592704853809LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -150425156 : 1389124683;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (short)-17277 : (short)24683;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? 468203118U : 2245748331U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_9 [i_0] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
