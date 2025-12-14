#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5520847826910851240LL;
long long int var_1 = -3179007354746813630LL;
unsigned char var_2 = (unsigned char)188;
unsigned char var_3 = (unsigned char)163;
long long int var_4 = -8593819120178435390LL;
unsigned long long int var_5 = 5148421087317364222ULL;
unsigned short var_6 = (unsigned short)44777;
long long int var_7 = 4233351643441551194LL;
unsigned long long int var_8 = 6397254760864815417ULL;
long long int var_10 = -5410846916751404214LL;
unsigned int var_11 = 2369960668U;
int var_12 = -1638231837;
unsigned long long int var_13 = 12268831569438869057ULL;
int zero = 0;
int var_14 = 962070660;
unsigned long long int var_15 = 13662744149758365332ULL;
unsigned char var_16 = (unsigned char)103;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 1654533490868517360ULL;
unsigned short var_19 = (unsigned short)28997;
signed char var_20 = (signed char)-102;
unsigned short var_21 = (unsigned short)6963;
unsigned long long int var_22 = 2097916200090029346ULL;
signed char var_23 = (signed char)-59;
unsigned short var_24 = (unsigned short)13246;
int arr_1 [16] [16] ;
long long int arr_2 [16] ;
long long int arr_7 [17] ;
unsigned char arr_11 [17] ;
unsigned long long int arr_3 [16] ;
int arr_10 [17] [17] [17] ;
unsigned int arr_13 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = -675559039;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = -5640631175176147709LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_7 [i_0] = 2317481788120210136LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_11 [i_0] = (unsigned char)242;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = 9893449276570183100ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = -1516888261;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_13 [i_0] = 1864122873U;
}

void checksum() {
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
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
