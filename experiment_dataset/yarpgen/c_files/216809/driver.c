#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9695690254045538110ULL;
unsigned int var_1 = 3791085140U;
unsigned long long int var_2 = 9024905999258466071ULL;
long long int var_3 = -9056443792428442700LL;
unsigned short var_4 = (unsigned short)6651;
unsigned int var_5 = 3683723780U;
long long int var_10 = -1046345285801045764LL;
long long int var_14 = 6236926985680279477LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_20 = (unsigned short)5044;
long long int var_21 = 3373075605840501970LL;
unsigned short var_22 = (unsigned short)59507;
_Bool arr_1 [10] ;
int arr_4 [10] ;
unsigned long long int arr_5 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = -1007108915;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = 18093991102567715728ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
