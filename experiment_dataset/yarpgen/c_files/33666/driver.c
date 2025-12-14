#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17268385811127581154ULL;
unsigned long long int var_1 = 4876027337959117416ULL;
signed char var_2 = (signed char)-25;
unsigned short var_7 = (unsigned short)43278;
unsigned short var_8 = (unsigned short)32700;
unsigned short var_9 = (unsigned short)57321;
unsigned short var_10 = (unsigned short)48302;
unsigned long long int var_13 = 6537224277833011793ULL;
signed char var_15 = (signed char)119;
signed char var_16 = (signed char)85;
long long int var_17 = -7720768221695975946LL;
int zero = 0;
unsigned long long int var_18 = 4954830609479407747ULL;
_Bool var_19 = (_Bool)0;
_Bool var_20 = (_Bool)1;
signed char var_21 = (signed char)-72;
unsigned long long int var_22 = 7296813856957622156ULL;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)-5;
unsigned short arr_0 [22] [22] ;
unsigned long long int arr_1 [22] ;
unsigned long long int arr_3 [15] ;
signed char arr_9 [15] [15] [15] [15] [15] [15] ;
unsigned short arr_2 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)52900;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 14957477709848038154ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 17284809844508399354ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                for (size_t i_3 = 0; i_3 < 15; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 15; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 15; ++i_5) 
                            arr_9 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)73;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned short)18827;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
