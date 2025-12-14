#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -118593158;
long long int var_9 = -2279086356484414919LL;
long long int var_11 = 1705502420175843206LL;
int zero = 0;
int var_20 = 700772146;
long long int var_21 = -2332401035703983009LL;
long long int var_22 = 5264075722150350347LL;
long long int var_23 = -110534130377256263LL;
long long int var_24 = 8428096221073483863LL;
int var_25 = -1504696106;
long long int arr_1 [22] ;
long long int arr_6 [10] ;
int arr_3 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = 5200240469667519062LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = 4146289157434457159LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? -102090474 : 1672568091;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
