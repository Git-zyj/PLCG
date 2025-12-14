#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7740372253033824132LL;
unsigned short var_1 = (unsigned short)34711;
unsigned int var_9 = 2779891195U;
unsigned long long int var_12 = 217730476986405948ULL;
long long int var_13 = -3305604310256863690LL;
short var_17 = (short)10093;
int zero = 0;
unsigned char var_18 = (unsigned char)199;
short var_19 = (short)16441;
unsigned int var_20 = 834185907U;
_Bool var_21 = (_Bool)0;
unsigned int arr_2 [19] ;
unsigned char arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = 3847528699U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned char)219;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
