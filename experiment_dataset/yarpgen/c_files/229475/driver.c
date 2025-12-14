#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
signed char var_1 = (signed char)116;
_Bool var_2 = (_Bool)0;
unsigned int var_3 = 4067392U;
_Bool var_5 = (_Bool)1;
unsigned long long int var_6 = 17061073956136152084ULL;
unsigned short var_7 = (unsigned short)63702;
unsigned short var_9 = (unsigned short)63680;
unsigned char var_10 = (unsigned char)253;
signed char var_11 = (signed char)-14;
unsigned char var_12 = (unsigned char)116;
unsigned char var_13 = (unsigned char)74;
int zero = 0;
signed char var_15 = (signed char)-55;
unsigned char var_16 = (unsigned char)193;
signed char var_17 = (signed char)-35;
unsigned int var_18 = 1475082374U;
long long int var_19 = 8314861470986907085LL;
unsigned int var_20 = 170961582U;
long long int arr_0 [14] ;
signed char arr_1 [14] ;
unsigned int arr_2 [14] ;
int arr_6 [24] ;
unsigned short arr_3 [14] ;
long long int arr_4 [14] ;
int arr_5 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = -6477574053950686598LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)20;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 3164928161U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_6 [i_0] = 1870772133;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned short)13853;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_4 [i_0] = -9109631242949887691LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_5 [i_0] = 601927637;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
