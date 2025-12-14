#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6141284093779532394LL;
int var_1 = -1607119441;
unsigned short var_3 = (unsigned short)39861;
int var_4 = -1401504961;
unsigned int var_5 = 3975421032U;
long long int var_6 = -3812613558295393026LL;
signed char var_7 = (signed char)-125;
int zero = 0;
long long int var_10 = -4839167349589723851LL;
long long int var_11 = -6470183137487572664LL;
unsigned char var_12 = (unsigned char)241;
signed char var_13 = (signed char)-23;
signed char var_14 = (signed char)120;
unsigned long long int var_15 = 17729907131373795646ULL;
unsigned short var_16 = (unsigned short)53181;
int arr_0 [25] ;
signed char arr_1 [25] [25] ;
unsigned char arr_3 [15] ;
long long int arr_4 [15] ;
unsigned char arr_5 [15] ;
unsigned short arr_11 [15] [15] ;
_Bool arr_2 [25] ;
int arr_6 [15] ;
int arr_10 [15] ;
int arr_15 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 963219358;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)36;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (unsigned char)190 : (unsigned char)244;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = 4354703523736988693LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (unsigned char)145;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_11 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)11327 : (unsigned short)60282;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? -362210906 : -542365596;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_10 [i_0] = (i_0 % 2 == 0) ? 1004023552 : 894742658;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_15 [i_0] [i_1] = (i_1 % 2 == 0) ? -1791823585 : -424841721;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_10 [i_0] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_15 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
