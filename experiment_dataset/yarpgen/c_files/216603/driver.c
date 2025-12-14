#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16675271202885018932ULL;
unsigned char var_1 = (unsigned char)89;
int var_3 = -1704281661;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)61414;
unsigned short var_7 = (unsigned short)44315;
int var_8 = 1894865129;
unsigned short var_9 = (unsigned short)61164;
unsigned char var_10 = (unsigned char)175;
int zero = 0;
unsigned int var_12 = 3015738815U;
unsigned short var_13 = (unsigned short)7173;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)17;
long long int var_16 = 6244717169938068378LL;
short var_17 = (short)12061;
unsigned char var_18 = (unsigned char)3;
int var_19 = 1771650307;
signed char var_20 = (signed char)-126;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 2339093221U;
unsigned long long int var_23 = 11690755727878503389ULL;
_Bool var_24 = (_Bool)1;
short var_25 = (short)5584;
unsigned long long int arr_0 [14] ;
int arr_1 [14] ;
unsigned int arr_2 [14] [14] [14] ;
unsigned char arr_3 [14] ;
signed char arr_5 [14] [14] ;
signed char arr_6 [14] ;
signed char arr_9 [14] [14] [14] [14] ;
unsigned long long int arr_11 [14] ;
int arr_14 [14] ;
unsigned short arr_17 [14] [14] [14] ;
short arr_4 [14] [14] ;
unsigned int arr_10 [14] [14] ;
signed char arr_15 [14] ;
unsigned short arr_18 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 3387800832325876687ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 567606398;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = 1253123787U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)2;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_5 [i_0] [i_1] = (signed char)-39;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (i_1 % 2 == 0) ? (signed char)-115 : (signed char)-123;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_11 [i_0] = 8080471595863463473ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_14 [i_0] = -1936780892;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = (unsigned short)19382;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_4 [i_0] [i_1] = (short)11084;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_10 [i_0] [i_1] = (i_0 % 2 == 0) ? 1572350214U : 2799582523U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_15 [i_0] = (signed char)119;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_18 [i_0] [i_1] = (unsigned short)34322;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_15 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_18 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
