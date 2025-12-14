#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5326965939862971416ULL;
int var_3 = -865826480;
int var_5 = -702485848;
int var_6 = 818994157;
short var_7 = (short)15237;
unsigned char var_8 = (unsigned char)209;
unsigned char var_9 = (unsigned char)29;
long long int var_10 = -8082821712018373034LL;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_13 = (signed char)51;
unsigned long long int var_14 = 440749035225143159ULL;
unsigned short var_15 = (unsigned short)1529;
unsigned int var_16 = 3299034049U;
long long int var_17 = -2858838699046407905LL;
_Bool arr_0 [14] ;
signed char arr_1 [14] ;
unsigned int arr_2 [14] ;
signed char arr_3 [14] [14] [14] ;
unsigned int arr_5 [14] [14] [14] [14] ;
_Bool arr_6 [14] [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)-56;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = 592672531U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)32;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 112367554U;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                for (size_t i_3 = 0; i_3 < 14; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
