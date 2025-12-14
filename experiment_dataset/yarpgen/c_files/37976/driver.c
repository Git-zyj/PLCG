#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -361698907;
unsigned char var_2 = (unsigned char)101;
long long int var_4 = -8430605542499876341LL;
unsigned long long int var_8 = 8081057453317945128ULL;
unsigned char var_10 = (unsigned char)224;
int zero = 0;
unsigned short var_12 = (unsigned short)36147;
_Bool var_13 = (_Bool)1;
int var_14 = -739322799;
unsigned char var_15 = (unsigned char)3;
unsigned long long int var_16 = 11281290745283745324ULL;
unsigned int var_17 = 1256280755U;
short var_18 = (short)12725;
long long int arr_1 [15] ;
unsigned long long int arr_2 [15] ;
unsigned long long int arr_3 [15] ;
unsigned short arr_4 [15] ;
int arr_6 [22] ;
unsigned long long int arr_7 [22] ;
signed char arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = -5333021587604851577LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 5471814565139514232ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 2992884076436940577ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (unsigned short)29804;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 159891452;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = 17966941216342032960ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (signed char)-88;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
