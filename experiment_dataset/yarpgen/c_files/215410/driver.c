#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-113;
unsigned int var_2 = 3568154691U;
unsigned short var_3 = (unsigned short)53795;
signed char var_5 = (signed char)-104;
unsigned short var_7 = (unsigned short)9850;
long long int var_8 = 1840931831302039098LL;
unsigned int var_9 = 2354579656U;
long long int var_10 = 3133460604002408936LL;
int zero = 0;
unsigned short var_13 = (unsigned short)19745;
unsigned int var_14 = 1407549987U;
unsigned short var_15 = (unsigned short)14570;
unsigned short var_16 = (unsigned short)14143;
unsigned short var_17 = (unsigned short)56541;
unsigned int var_18 = 2113936534U;
unsigned short arr_3 [18] [18] [18] ;
unsigned short arr_9 [22] [22] ;
unsigned short arr_5 [18] [18] ;
signed char arr_6 [18] ;
unsigned short arr_12 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (unsigned short)52947;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_9 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned short)24284 : (unsigned short)5487;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_5 [i_0] [i_1] = (unsigned short)52932;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_6 [i_0] = (signed char)-18;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_12 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)24783 : (unsigned short)54008;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_12 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
