#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -4190850685073299998LL;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 13620923831485083772ULL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 2657270977U;
unsigned int var_8 = 349770071U;
signed char var_9 = (signed char)-108;
unsigned int var_12 = 3182519816U;
unsigned long long int var_13 = 6096261983515404686ULL;
unsigned long long int var_14 = 4357162198423213411ULL;
int var_15 = 1624209013;
unsigned int var_16 = 370764871U;
int zero = 0;
unsigned int var_17 = 3019826578U;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)61;
_Bool var_21 = (_Bool)0;
unsigned short var_22 = (unsigned short)5336;
signed char var_23 = (signed char)-67;
unsigned short arr_6 [25] ;
long long int arr_7 [25] ;
unsigned int arr_10 [25] [25] ;
signed char arr_11 [25] [25] ;
long long int arr_16 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned short)64731 : (unsigned short)64024;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? 8490080451987384395LL : -7453262775394147812LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_10 [i_0] [i_1] = 1533747893U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_11 [i_0] [i_1] = (signed char)3;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_16 [i_0] = (i_0 % 2 == 0) ? 3884057153796764752LL : -4360702926547029060LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_7 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_10 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_16 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
