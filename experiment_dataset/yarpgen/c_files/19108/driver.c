#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13614;
unsigned long long int var_1 = 9539785082905978923ULL;
long long int var_2 = -3741030162310620833LL;
unsigned long long int var_3 = 562884170901108374ULL;
signed char var_4 = (signed char)80;
unsigned long long int var_5 = 11612783038695837646ULL;
short var_7 = (short)24194;
unsigned int var_8 = 1850939853U;
unsigned char var_10 = (unsigned char)46;
int zero = 0;
long long int var_11 = -7343207780783096673LL;
unsigned int var_12 = 3846337704U;
unsigned long long int var_13 = 5751597176119118990ULL;
int var_14 = -852500364;
unsigned long long int var_15 = 16897412164956438012ULL;
long long int var_16 = -6099227460638134119LL;
unsigned char arr_0 [23] ;
long long int arr_1 [23] ;
int arr_2 [23] ;
unsigned long long int arr_6 [11] ;
unsigned long long int arr_7 [11] ;
long long int arr_3 [23] ;
unsigned long long int arr_4 [23] ;
unsigned int arr_8 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (unsigned char)191;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1350457752673517773LL : 974184914742060376LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 1655416217 : 615423605;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 13423281660243975579ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_7 [i_0] = 15024526978250663856ULL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -5642661855682181945LL : -7480348633435789269LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 14398588022069157058ULL : 8393658789193298619ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_8 [i_0] = 158070987U;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
