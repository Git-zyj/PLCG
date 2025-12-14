#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_1 = 9730238411577399755ULL;
_Bool var_2 = (_Bool)1;
int var_3 = 611134494;
unsigned long long int var_5 = 9065611138607620847ULL;
_Bool var_6 = (_Bool)1;
int var_7 = 169006928;
signed char var_9 = (signed char)89;
long long int var_11 = -3097034865960312637LL;
signed char var_12 = (signed char)-63;
signed char var_13 = (signed char)-62;
int zero = 0;
unsigned short var_15 = (unsigned short)50531;
unsigned char var_16 = (unsigned char)35;
_Bool var_17 = (_Bool)0;
short var_18 = (short)-742;
unsigned short var_19 = (unsigned short)15332;
unsigned long long int var_20 = 11201490184313042510ULL;
int var_21 = -811255957;
long long int arr_0 [20] ;
unsigned long long int arr_1 [20] ;
_Bool arr_3 [20] [20] [20] ;
short arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 3252830526871043525LL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 13005654989077486686ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)15753 : (short)-29836;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
