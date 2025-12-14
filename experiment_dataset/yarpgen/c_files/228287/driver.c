#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_16 = -1235858610;
short var_17 = (short)17576;
int zero = 0;
short var_20 = (short)20309;
unsigned int var_21 = 1532149814U;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-14555;
_Bool var_24 = (_Bool)0;
unsigned short var_25 = (unsigned short)5612;
unsigned int var_26 = 634287500U;
int var_27 = 1793981471;
unsigned int var_28 = 3570861219U;
unsigned short var_29 = (unsigned short)65196;
_Bool var_30 = (_Bool)1;
unsigned char var_31 = (unsigned char)159;
signed char var_32 = (signed char)-19;
unsigned int var_33 = 1609375260U;
short arr_0 [23] ;
unsigned char arr_2 [23] ;
unsigned short arr_3 [23] ;
unsigned short arr_8 [23] ;
unsigned long long int arr_5 [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_0 [i_0] = (short)-22972;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = (unsigned char)206;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_3 [i_0] = (unsigned short)23636;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? (unsigned short)44497 : (unsigned short)47223;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_5 [i_0] = 6413850133723900579ULL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
    hash(&seed, var_29);
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
