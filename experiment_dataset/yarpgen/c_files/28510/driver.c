#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)65435;
_Bool var_1 = (_Bool)1;
unsigned long long int var_2 = 2294441275998168330ULL;
unsigned int var_3 = 2004031328U;
unsigned long long int var_4 = 4186022469933731408ULL;
int var_5 = 1892416777;
unsigned short var_8 = (unsigned short)60982;
unsigned short var_9 = (unsigned short)21733;
_Bool var_11 = (_Bool)1;
int var_12 = -2029518533;
unsigned long long int var_13 = 15325287245454714340ULL;
long long int var_14 = 8462708287505700300LL;
unsigned int var_15 = 885070761U;
int var_16 = 138074202;
int zero = 0;
unsigned short var_17 = (unsigned short)42104;
short var_18 = (short)28774;
short var_19 = (short)9257;
unsigned int var_20 = 3595311560U;
_Bool var_21 = (_Bool)0;
unsigned char arr_0 [16] [16] ;
unsigned int arr_2 [16] ;
short arr_3 [16] ;
_Bool arr_4 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)99;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 2397459644U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_3 [i_0] = (short)4282;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_3 [i_0] );
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
