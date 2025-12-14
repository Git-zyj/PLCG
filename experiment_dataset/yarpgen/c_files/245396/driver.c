#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1731272647;
int var_1 = 268231737;
int var_4 = 1967990256;
unsigned long long int var_5 = 5351172023204260393ULL;
unsigned char var_8 = (unsigned char)4;
unsigned int var_9 = 3239823207U;
int zero = 0;
unsigned char var_11 = (unsigned char)128;
unsigned short var_12 = (unsigned short)4873;
unsigned int var_13 = 956427151U;
signed char var_14 = (signed char)-17;
unsigned short var_15 = (unsigned short)14177;
unsigned int var_16 = 2024576716U;
unsigned long long int var_17 = 9794885923604687437ULL;
unsigned long long int var_18 = 16027201678994998981ULL;
unsigned int var_19 = 194389803U;
int var_20 = -337357797;
int arr_0 [20] ;
signed char arr_1 [20] ;
unsigned long long int arr_2 [20] ;
short arr_3 [20] ;
int arr_4 [22] ;
long long int arr_5 [22] ;
short arr_6 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = 255438722;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = (signed char)53;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? 14898219510537749850ULL : 2902170016274873419ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)-31589;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = -1908432736;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -1943686047459259201LL : -6928930015667888973LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_6 [i_0] [i_1] = (i_0 % 2 == 0) ? (short)-23099 : (short)-4135;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
