#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15227249228880270207ULL;
short var_1 = (short)-5800;
unsigned long long int var_3 = 10248189484222222685ULL;
unsigned long long int var_4 = 10023488217084166366ULL;
long long int var_5 = -7411686591641898491LL;
int var_6 = 373759703;
unsigned int var_7 = 1352100046U;
signed char var_8 = (signed char)6;
int var_9 = -1538967836;
signed char var_10 = (signed char)25;
short var_11 = (short)1470;
long long int var_12 = 3039540385072894647LL;
unsigned int var_15 = 4127235864U;
signed char var_16 = (signed char)-124;
unsigned long long int var_17 = 17568033526769508022ULL;
long long int var_19 = 1665899739756979678LL;
int zero = 0;
long long int var_20 = -4759288457969563387LL;
long long int var_21 = -3662996185188506750LL;
signed char var_22 = (signed char)-48;
_Bool var_23 = (_Bool)0;
int var_24 = -127864371;
short var_25 = (short)-6877;
unsigned int var_26 = 2484116202U;
short var_27 = (short)4714;
unsigned int var_28 = 2544940521U;
int var_29 = 1699533791;
unsigned short var_30 = (unsigned short)32420;
unsigned char var_31 = (unsigned char)125;
unsigned int arr_2 [19] ;
unsigned char arr_3 [19] ;
unsigned int arr_10 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 3964787344U : 3840977464U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)9 : (unsigned char)174;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = 3305107970U;
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
