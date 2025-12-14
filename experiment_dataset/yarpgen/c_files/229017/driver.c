#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-6;
short var_1 = (short)7312;
long long int var_2 = -7618018531603485361LL;
unsigned char var_4 = (unsigned char)120;
unsigned long long int var_5 = 6154051022072567679ULL;
int zero = 0;
signed char var_10 = (signed char)111;
unsigned short var_11 = (unsigned short)27946;
long long int var_12 = 7822543366344089941LL;
unsigned int var_13 = 4238876429U;
long long int var_14 = -8791747466178239725LL;
unsigned short var_15 = (unsigned short)45578;
unsigned short var_16 = (unsigned short)33566;
unsigned int var_17 = 141445685U;
long long int var_18 = 2621543988198269440LL;
_Bool arr_0 [13] [13] ;
unsigned long long int arr_1 [13] ;
unsigned char arr_3 [23] [23] ;
signed char arr_4 [23] ;
unsigned short arr_7 [10] ;
long long int arr_8 [10] [10] ;
unsigned long long int arr_2 [13] ;
short arr_5 [23] [23] ;
long long int arr_6 [23] ;
signed char arr_10 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = 7057180191665854905ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)141;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (signed char)-103;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_7 [i_0] = (unsigned short)58902;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_8 [i_0] [i_1] = (i_1 % 2 == 0) ? 6484208690044614904LL : 5183758063725482121LL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 5962487632722523519ULL : 1242763482679382888ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (short)11138;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_6 [i_0] = -1540264746441710845LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? (signed char)-95 : (signed char)-5;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_10 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
