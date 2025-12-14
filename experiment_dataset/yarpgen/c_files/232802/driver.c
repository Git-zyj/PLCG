#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 11404821829189411103ULL;
long long int var_2 = -4829942713685891742LL;
short var_5 = (short)31271;
unsigned long long int var_12 = 2103433166558590719ULL;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_19 = (short)5680;
unsigned char var_20 = (unsigned char)183;
unsigned int var_21 = 1420265256U;
int var_22 = 2124051386;
signed char arr_0 [15] ;
unsigned char arr_1 [15] ;
unsigned char arr_2 [15] ;
int arr_5 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-101;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (unsigned char)195;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (unsigned char)127;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = 2011411815;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
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
