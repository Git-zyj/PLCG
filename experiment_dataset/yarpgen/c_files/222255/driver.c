#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)250;
unsigned char var_3 = (unsigned char)71;
signed char var_5 = (signed char)51;
unsigned int var_6 = 66625604U;
long long int var_7 = 8965548939710467202LL;
int var_8 = 1361434582;
unsigned short var_9 = (unsigned short)10760;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)52;
unsigned long long int var_13 = 3789227542850177063ULL;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_15 = -255685589;
int var_16 = 15107638;
short var_17 = (short)-1884;
signed char var_18 = (signed char)-79;
unsigned short var_19 = (unsigned short)1603;
unsigned char var_20 = (unsigned char)174;
short var_21 = (short)21636;
unsigned long long int arr_2 [25] ;
unsigned short arr_4 [25] [25] [25] ;
unsigned int arr_5 [25] ;
signed char arr_15 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 17762607952968052251ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)39050;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 3809007897U : 1469469059U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_15 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (signed char)96 : (signed char)96;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                hash(&seed, arr_15 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
