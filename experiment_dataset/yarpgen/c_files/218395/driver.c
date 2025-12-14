#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-81;
short var_1 = (short)-6791;
unsigned long long int var_2 = 16536524895416136163ULL;
long long int var_3 = -3177534715845031014LL;
unsigned short var_4 = (unsigned short)32418;
_Bool var_5 = (_Bool)0;
long long int var_6 = 8149675281813666760LL;
signed char var_7 = (signed char)-39;
short var_8 = (short)22665;
long long int var_9 = -6816213590563825363LL;
unsigned long long int var_10 = 12224603983318234443ULL;
unsigned char var_11 = (unsigned char)100;
unsigned short var_12 = (unsigned short)2848;
int zero = 0;
unsigned char var_13 = (unsigned char)10;
unsigned short var_14 = (unsigned short)4110;
unsigned char var_15 = (unsigned char)196;
signed char var_16 = (signed char)-9;
unsigned long long int var_17 = 17504565061738159790ULL;
unsigned char var_18 = (unsigned char)99;
unsigned long long int var_19 = 13387000907479721519ULL;
unsigned short var_20 = (unsigned short)50039;
unsigned char arr_0 [12] ;
long long int arr_1 [12] ;
short arr_4 [25] ;
unsigned int arr_5 [25] ;
unsigned long long int arr_9 [25] [25] ;
long long int arr_2 [12] [12] ;
unsigned char arr_3 [12] ;
int arr_7 [25] ;
_Bool arr_8 [25] ;
short arr_11 [25] ;
long long int arr_12 [25] ;
_Bool arr_15 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)20;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 3460303443592406884LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_4 [i_0] = (short)-27824;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = 3580687070U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_9 [i_0] [i_1] = 362959956187897936ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 6822487273959991689LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)179;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 79295895 : -620880205;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_11 [i_0] = (i_0 % 2 == 0) ? (short)-24499 : (short)-15309;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_12 [i_0] = (i_0 % 2 == 0) ? -8104874281025286428LL : -5673099510276257653LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_15 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
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
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_8 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_11 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_12 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_15 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
