#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8080736658092619014LL;
unsigned short var_1 = (unsigned short)28653;
unsigned int var_6 = 4094977739U;
short var_7 = (short)1208;
int var_10 = -847037995;
unsigned short var_11 = (unsigned short)19203;
unsigned int var_13 = 1532214517U;
short var_14 = (short)-10516;
signed char var_17 = (signed char)126;
long long int var_18 = 5911716271254374680LL;
short var_19 = (short)2295;
int zero = 0;
long long int var_20 = 4238144114335834579LL;
unsigned short var_21 = (unsigned short)60548;
unsigned char var_22 = (unsigned char)80;
_Bool var_23 = (_Bool)1;
unsigned long long int var_24 = 8440526685682879122ULL;
unsigned short arr_1 [10] ;
unsigned int arr_2 [10] ;
short arr_3 [10] ;
unsigned short arr_4 [10] ;
_Bool arr_5 [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)35875;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 3635471575U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (short)-1756;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? (unsigned short)62708 : (unsigned short)55627;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
