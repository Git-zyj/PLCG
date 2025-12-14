#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2475155499505917710LL;
short var_2 = (short)-27205;
int var_3 = -1657494643;
int var_4 = -1757094360;
short var_5 = (short)-17334;
signed char var_6 = (signed char)-76;
_Bool var_7 = (_Bool)0;
int var_8 = -1970523475;
signed char var_9 = (signed char)107;
int var_10 = -303106645;
unsigned short var_11 = (unsigned short)17815;
int zero = 0;
int var_12 = 349756853;
unsigned short var_13 = (unsigned short)35525;
long long int var_14 = -4210671148776137205LL;
short var_15 = (short)-27612;
long long int var_16 = 2521602768408302424LL;
unsigned long long int var_17 = 9507568228873122355ULL;
unsigned short var_18 = (unsigned short)27982;
unsigned short var_19 = (unsigned short)32468;
int var_20 = -512497872;
unsigned char var_21 = (unsigned char)0;
int var_22 = 481013223;
unsigned char arr_0 [20] ;
_Bool arr_1 [20] ;
int arr_3 [25] ;
long long int arr_4 [25] [25] ;
unsigned char arr_2 [20] [20] ;
unsigned long long int arr_5 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_3 [i_0] = 1411006793;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_4 [i_0] [i_1] = 4891381826120461342LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)140;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 17815738511804744544ULL;
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
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
