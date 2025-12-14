#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 215882983U;
unsigned short var_3 = (unsigned short)52843;
_Bool var_4 = (_Bool)0;
unsigned short var_5 = (unsigned short)4508;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)26399;
int zero = 0;
long long int var_10 = 6615500968204537267LL;
int var_11 = -391277929;
unsigned short var_12 = (unsigned short)3151;
unsigned short var_13 = (unsigned short)22123;
unsigned short var_14 = (unsigned short)39970;
unsigned long long int arr_3 [10] ;
unsigned short arr_4 [10] ;
int arr_5 [10] ;
unsigned int arr_2 [25] ;
unsigned char arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = 14415731974006361353ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned short)64224;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_5 [i_0] = -20424409;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = 3053101192U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (unsigned char)97;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
