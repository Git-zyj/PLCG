#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)11917;
long long int var_9 = -3821204972363910608LL;
unsigned short var_10 = (unsigned short)28313;
signed char var_11 = (signed char)-78;
unsigned short var_12 = (unsigned short)56156;
signed char var_18 = (signed char)92;
unsigned int var_19 = 2445637716U;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = 1777676994;
_Bool var_22 = (_Bool)0;
unsigned char var_23 = (unsigned char)118;
long long int var_24 = 5913877803360215139LL;
unsigned char arr_0 [14] ;
unsigned short arr_1 [14] [14] ;
unsigned short arr_2 [14] ;
unsigned int arr_3 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (unsigned char)238;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)5980;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (unsigned short)24927;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_3 [i_0] [i_1] = 300276739U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
