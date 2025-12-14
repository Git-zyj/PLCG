#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10931547916326937055ULL;
_Bool var_4 = (_Bool)1;
unsigned long long int var_5 = 16692448414394355976ULL;
unsigned short var_10 = (unsigned short)39633;
int var_12 = 934976787;
unsigned int var_14 = 1694929192U;
int zero = 0;
long long int var_20 = -7558236428580363456LL;
unsigned int var_21 = 1370326280U;
short var_22 = (short)-9169;
unsigned int var_23 = 3249246076U;
signed char var_24 = (signed char)-22;
signed char var_25 = (signed char)3;
unsigned long long int var_26 = 17180391354008415797ULL;
unsigned int var_27 = 4218540675U;
unsigned char var_28 = (unsigned char)208;
_Bool var_29 = (_Bool)0;
unsigned long long int var_30 = 16306642331849162340ULL;
int var_31 = 277976256;
unsigned short var_32 = (unsigned short)47388;
long long int var_33 = -1176272418832989427LL;
unsigned short var_34 = (unsigned short)17479;
unsigned char arr_0 [15] ;
unsigned long long int arr_2 [15] ;
unsigned char arr_4 [15] ;
_Bool arr_5 [15] [15] [15] ;
unsigned short arr_6 [15] [15] [15] ;
int arr_8 [15] ;
unsigned short arr_10 [10] ;
int arr_12 [10] [10] [10] ;
unsigned int arr_17 [10] [10] [10] ;
unsigned int arr_21 [10] [10] [10] [10] [10] ;
unsigned int arr_22 [10] [10] [10] [10] [10] ;
unsigned int arr_9 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 12279485080025680323ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)39719;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_8 [i_0] = -1262207017;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_10 [i_0] = (unsigned short)55442;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = -1164847030;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_17 [i_0] [i_1] [i_2] = 4177283488U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_21 [i_0] [i_1] [i_2] [i_3] [i_4] = 403802697U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_22 [i_0] [i_1] [i_2] [i_3] [i_4] = 2826833707U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3193572548U : 1101183878U;
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
    hash(&seed, var_32);
    hash(&seed, var_33);
    hash(&seed, var_34);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_9 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
