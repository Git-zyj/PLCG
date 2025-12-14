#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)14685;
unsigned char var_2 = (unsigned char)71;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)62795;
unsigned long long int var_8 = 1620114464513260586ULL;
signed char var_9 = (signed char)104;
long long int var_11 = 5877652531121421750LL;
int zero = 0;
short var_14 = (short)25910;
unsigned short var_15 = (unsigned short)30839;
signed char var_16 = (signed char)2;
unsigned long long int var_17 = 6884218144760081134ULL;
long long int var_18 = 8239432791937731960LL;
unsigned int var_19 = 3776689395U;
unsigned short var_20 = (unsigned short)27445;
int arr_2 [18] ;
short arr_3 [18] [18] [18] ;
_Bool arr_4 [18] ;
unsigned long long int arr_5 [18] ;
unsigned char arr_7 [18] [18] [18] ;
short arr_12 [16] ;
unsigned int arr_9 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = -1930710661;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (short)-101 : (short)18835;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 12704849064573082803ULL : 11172078471826919442ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned char)15 : (unsigned char)181;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_12 [i_0] = (short)-10274;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_9 [i_0] [i_1] = (i_1 % 2 == 0) ? 359513553U : 3881678593U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
