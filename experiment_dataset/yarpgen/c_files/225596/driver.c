#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)89;
int var_3 = -475170029;
short var_4 = (short)-20024;
unsigned char var_6 = (unsigned char)141;
unsigned short var_9 = (unsigned short)9905;
int var_11 = -178087406;
signed char var_13 = (signed char)87;
int zero = 0;
unsigned short var_14 = (unsigned short)34402;
unsigned int var_15 = 4085180953U;
unsigned char var_16 = (unsigned char)41;
short var_17 = (short)-110;
_Bool var_18 = (_Bool)0;
long long int var_19 = -455175211117716709LL;
_Bool var_20 = (_Bool)0;
signed char arr_0 [11] [11] ;
unsigned long long int arr_1 [11] ;
int arr_2 [11] [11] ;
short arr_3 [11] [11] [11] ;
unsigned long long int arr_4 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)86 : (signed char)74;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 18092941920799599888ULL : 5291920446632246161ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? 1027602095 : 1283469954;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-4251 : (short)-3574;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 3462582244861095300ULL : 4742470299234403606ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
