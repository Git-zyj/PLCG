#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-34;
long long int var_1 = -4489051353779528873LL;
long long int var_2 = 2695844237196390036LL;
unsigned int var_5 = 4141123043U;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)58;
int zero = 0;
unsigned int var_10 = 1266688944U;
long long int var_11 = 7600107839217855030LL;
_Bool var_12 = (_Bool)0;
unsigned int var_13 = 3765707539U;
long long int var_14 = -5738729106093708856LL;
long long int var_15 = 2942794973337513931LL;
signed char var_16 = (signed char)-2;
long long int var_17 = -2943805854274954815LL;
long long int var_18 = -6695558507134314658LL;
signed char arr_0 [12] ;
_Bool arr_1 [12] ;
signed char arr_3 [12] [12] ;
long long int arr_5 [12] ;
_Bool arr_7 [22] ;
unsigned int arr_9 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)-36;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_3 [i_0] [i_1] = (signed char)-44;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -5741498300648622391LL : -8673226060693080706LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? 790763523U : 608714247U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
