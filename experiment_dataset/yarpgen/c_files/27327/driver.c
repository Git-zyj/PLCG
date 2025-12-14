#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)-18811;
_Bool var_6 = (_Bool)0;
short var_8 = (short)-20099;
short var_10 = (short)-5001;
unsigned char var_13 = (unsigned char)164;
int zero = 0;
unsigned long long int var_17 = 17443162600805420278ULL;
short var_18 = (short)22381;
unsigned char var_19 = (unsigned char)50;
unsigned short var_20 = (unsigned short)37039;
unsigned short var_21 = (unsigned short)24628;
unsigned int var_22 = 100114923U;
unsigned int var_23 = 3970443020U;
signed char var_24 = (signed char)-81;
unsigned int var_25 = 3380079649U;
unsigned short arr_0 [21] [21] ;
unsigned long long int arr_1 [21] ;
unsigned int arr_3 [21] [21] ;
unsigned int arr_4 [21] ;
unsigned short arr_5 [21] [21] [21] ;
unsigned char arr_6 [21] ;
unsigned short arr_7 [21] [21] [21] ;
short arr_8 [21] [21] [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned short)25431;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 16774592971563109037ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? 3574228109U : 2500612816U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = 754177418U;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)9783 : (unsigned short)43660;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (unsigned char)172 : (unsigned char)76;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (unsigned short)53061;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            for (size_t i_2 = 0; i_2 < 21; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (short)-3424;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
