#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
_Bool var_3 = (_Bool)1;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 3125726660U;
signed char var_8 = (signed char)59;
unsigned long long int var_9 = 8023461360478580264ULL;
unsigned long long int var_11 = 15143191589917182952ULL;
int var_12 = 1661024414;
unsigned int var_13 = 1645188792U;
int zero = 0;
unsigned char var_15 = (unsigned char)36;
long long int var_16 = 7626822032451377845LL;
unsigned long long int var_17 = 5890480164361288858ULL;
unsigned long long int arr_0 [11] [11] ;
_Bool arr_5 [11] ;
unsigned int arr_6 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = 10693133243074417207ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_6 [i_0] = 3539557359U;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
