#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)88;
unsigned int var_3 = 2009778325U;
short var_4 = (short)-15075;
unsigned short var_8 = (unsigned short)46028;
unsigned short var_9 = (unsigned short)64917;
unsigned long long int var_11 = 10351162280457473791ULL;
_Bool var_13 = (_Bool)0;
unsigned short var_15 = (unsigned short)25004;
int var_17 = 455436377;
int zero = 0;
_Bool var_18 = (_Bool)0;
unsigned long long int var_19 = 16759779659222258393ULL;
int var_20 = -2096855605;
int var_21 = 837767557;
unsigned long long int var_22 = 11912396475877099626ULL;
long long int arr_2 [21] ;
unsigned short arr_4 [21] ;
signed char arr_5 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = 3932231626405727826LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (unsigned short)9542;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (signed char)100;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
