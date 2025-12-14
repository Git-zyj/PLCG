#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8546680632066979227ULL;
unsigned int var_1 = 850213753U;
unsigned char var_2 = (unsigned char)156;
unsigned char var_4 = (unsigned char)90;
unsigned char var_5 = (unsigned char)44;
unsigned int var_6 = 915959327U;
unsigned int var_9 = 1034333176U;
unsigned char var_10 = (unsigned char)108;
unsigned short var_11 = (unsigned short)54741;
int zero = 0;
unsigned long long int var_12 = 15699588557488448819ULL;
signed char var_13 = (signed char)-31;
unsigned int var_14 = 106562929U;
unsigned char var_15 = (unsigned char)96;
_Bool var_16 = (_Bool)1;
unsigned char arr_0 [12] [12] ;
unsigned char arr_2 [15] [15] ;
unsigned int arr_3 [15] ;
signed char arr_4 [15] ;
int arr_5 [15] ;
unsigned char arr_8 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)136;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = 2633611187U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (signed char)23 : (signed char)-67;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 1586670378 : -2129643965;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (unsigned char)165 : (unsigned char)207;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
