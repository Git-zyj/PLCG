#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3963691431U;
short var_2 = (short)-29516;
unsigned long long int var_3 = 344108733759032279ULL;
signed char var_4 = (signed char)-39;
_Bool var_6 = (_Bool)0;
_Bool var_9 = (_Bool)0;
_Bool var_14 = (_Bool)0;
unsigned int var_16 = 3983634778U;
unsigned short var_17 = (unsigned short)54283;
int zero = 0;
unsigned char var_18 = (unsigned char)150;
long long int var_19 = 900507008509115408LL;
unsigned long long int var_20 = 1163383204343392979ULL;
unsigned int var_21 = 3074328707U;
unsigned char var_22 = (unsigned char)201;
unsigned long long int var_23 = 9529164791850645780ULL;
unsigned int var_24 = 14568525U;
unsigned int var_25 = 2102255131U;
int var_26 = 1816987724;
signed char var_27 = (signed char)-52;
long long int var_28 = 2174343342458991341LL;
_Bool var_29 = (_Bool)1;
unsigned short arr_0 [10] [10] ;
unsigned short arr_1 [10] ;
unsigned char arr_2 [10] ;
unsigned long long int arr_5 [22] [22] ;
unsigned short arr_6 [22] ;
unsigned long long int arr_8 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)24299;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (unsigned short)29696;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (unsigned char)169 : (unsigned char)243;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_5 [i_0] [i_1] = 10891596287927137056ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned short)62079;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_8 [i_0] = 11031624427802317216ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
