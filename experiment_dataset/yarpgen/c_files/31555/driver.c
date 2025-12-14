#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1577915844698059913LL;
signed char var_2 = (signed char)44;
signed char var_3 = (signed char)-40;
unsigned short var_4 = (unsigned short)50113;
unsigned short var_6 = (unsigned short)44704;
unsigned char var_13 = (unsigned char)87;
int zero = 0;
long long int var_18 = -378447422436658706LL;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)0;
int arr_0 [17] ;
unsigned short arr_1 [17] [17] ;
unsigned int arr_2 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -1364717304;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)14189;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = 3788367744U;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
