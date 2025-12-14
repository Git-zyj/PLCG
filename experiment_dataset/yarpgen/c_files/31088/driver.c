#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5512608151274770756LL;
unsigned int var_1 = 986984142U;
long long int var_2 = 6976065341287718172LL;
unsigned long long int var_3 = 14140816807319619865ULL;
unsigned char var_6 = (unsigned char)246;
int var_7 = -970309112;
int var_8 = -159493972;
short var_10 = (short)12992;
int zero = 0;
unsigned long long int var_13 = 13454748422741560645ULL;
long long int var_14 = 8441435731843597490LL;
unsigned long long int var_15 = 10420893667415449517ULL;
long long int var_16 = 7415099333316247704LL;
unsigned long long int var_17 = 7193185371178358899ULL;
unsigned long long int var_18 = 11102216520587026684ULL;
long long int var_19 = 3947104494662779245LL;
_Bool arr_1 [14] ;
_Bool arr_2 [14] ;
unsigned int arr_4 [14] ;
_Bool arr_6 [14] [14] ;
_Bool arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 1675155418U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_6 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
