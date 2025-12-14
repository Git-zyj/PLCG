#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)2818;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 16519651746722193947ULL;
unsigned short var_10 = (unsigned short)41313;
int zero = 0;
long long int var_12 = 4762118801697890506LL;
signed char var_13 = (signed char)-51;
long long int var_14 = 2678527108844835959LL;
unsigned int arr_1 [14] ;
unsigned short arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = 2745034540U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)10289;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
