#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)15183;
signed char var_2 = (signed char)-84;
long long int var_10 = 2832151568511978530LL;
long long int var_11 = -1898102611280076370LL;
unsigned long long int var_13 = 17766351161976034695ULL;
unsigned int var_14 = 1415583766U;
unsigned int var_16 = 63798554U;
int zero = 0;
unsigned char var_18 = (unsigned char)0;
long long int var_19 = 9147535267247279750LL;
long long int var_20 = -6635846716118132543LL;
unsigned int var_21 = 3599548488U;
signed char arr_0 [15] ;
unsigned int arr_1 [15] ;
long long int arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (signed char)-71;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 80965207U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = 5869597290651330956LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
