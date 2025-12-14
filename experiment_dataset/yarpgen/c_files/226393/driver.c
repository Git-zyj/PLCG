#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14716921617074629544ULL;
_Bool var_2 = (_Bool)1;
unsigned long long int var_3 = 15236767262778237112ULL;
int var_5 = 629186045;
int var_7 = -1771610366;
int var_8 = 118123708;
unsigned long long int var_9 = 18433778682838567122ULL;
int zero = 0;
int var_10 = 1941665576;
unsigned long long int var_11 = 3272415777350342603ULL;
signed char var_12 = (signed char)18;
short var_13 = (short)7988;
short var_14 = (short)19960;
signed char var_15 = (signed char)48;
signed char var_16 = (signed char)-36;
int arr_1 [18] [18] ;
_Bool arr_2 [18] [18] ;
unsigned short arr_4 [22] ;
unsigned long long int arr_3 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_1 [i_0] [i_1] = (i_1 % 2 == 0) ? -1633330410 : 119768642;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)51270;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 6525544173623267434ULL : 7114702941083907830ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
