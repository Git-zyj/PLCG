#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)163;
unsigned char var_7 = (unsigned char)146;
_Bool var_8 = (_Bool)1;
short var_9 = (short)-25842;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 2401269186286393644LL;
_Bool var_12 = (_Bool)0;
short var_13 = (short)-20964;
unsigned short arr_0 [22] ;
signed char arr_1 [22] ;
signed char arr_4 [22] ;
signed char arr_6 [22] [22] ;
signed char arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned short)42040 : (unsigned short)40117;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_1 [i_0] = (signed char)-7;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (signed char)107;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)-124 : (signed char)6;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
