#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-71;
unsigned char var_3 = (unsigned char)209;
signed char var_5 = (signed char)101;
signed char var_13 = (signed char)-57;
int zero = 0;
signed char var_15 = (signed char)48;
unsigned long long int var_16 = 17278579855309444828ULL;
int var_17 = 999240360;
long long int var_18 = 1954735566472476343LL;
unsigned long long int var_19 = 12619497178344965001ULL;
signed char var_20 = (signed char)-78;
signed char var_21 = (signed char)-22;
long long int arr_0 [25] ;
unsigned int arr_1 [25] ;
short arr_6 [25] ;
_Bool arr_8 [25] ;
short arr_5 [18] ;
signed char arr_9 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 8499582914331995862LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 565560278U;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_6 [i_0] = (short)22079;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_8 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)11753;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_9 [i_0] = (signed char)-66;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
