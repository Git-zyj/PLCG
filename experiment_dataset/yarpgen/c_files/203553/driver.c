#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)59837;
unsigned int var_3 = 3320692070U;
long long int var_4 = -7757537205310707653LL;
signed char var_5 = (signed char)104;
unsigned long long int var_8 = 18188667911320747313ULL;
int var_9 = -1517175742;
int zero = 0;
signed char var_11 = (signed char)46;
unsigned char var_12 = (unsigned char)235;
_Bool var_13 = (_Bool)0;
unsigned long long int arr_4 [16] ;
unsigned long long int arr_5 [16] ;
signed char arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 7184405388864621073ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 9133757680156065074ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)55;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
