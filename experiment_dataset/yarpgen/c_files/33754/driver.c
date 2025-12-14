#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1405075382U;
long long int var_1 = 4794396981076247111LL;
int var_3 = 694383966;
unsigned short var_5 = (unsigned short)18522;
unsigned long long int var_7 = 5522834997040863815ULL;
signed char var_11 = (signed char)-51;
long long int var_12 = -2494270852650711094LL;
unsigned char var_16 = (unsigned char)149;
signed char var_17 = (signed char)55;
int zero = 0;
long long int var_20 = 4744480116920798604LL;
_Bool var_21 = (_Bool)0;
long long int var_22 = -108615822057878907LL;
int var_23 = 27528268;
long long int var_24 = -6777099420507331741LL;
signed char var_25 = (signed char)69;
unsigned int var_26 = 409076445U;
long long int var_27 = 9192174088539729238LL;
signed char arr_0 [14] [14] ;
long long int arr_1 [14] [14] ;
unsigned int arr_2 [14] [14] ;
unsigned int arr_5 [23] [23] ;
long long int arr_8 [23] [23] ;
unsigned short arr_3 [14] ;
unsigned long long int arr_4 [14] ;
unsigned long long int arr_9 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)19;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 6509814619787131049LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = 2374652993U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = (i_0 % 2 == 0) ? 3101876966U : 2760087078U;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_8 [i_0] [i_1] = 6357147260229518111LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)58889;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = 11705191579999854984ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_9 [i_0] [i_1] = 2288657297910845306ULL;
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
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            hash(&seed, arr_9 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
