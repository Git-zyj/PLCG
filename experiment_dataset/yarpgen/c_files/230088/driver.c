#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1129506399;
unsigned char var_5 = (unsigned char)160;
long long int var_7 = 6001027924762543700LL;
_Bool var_8 = (_Bool)1;
int var_10 = 1532312722;
short var_11 = (short)2950;
short var_13 = (short)4830;
int zero = 0;
unsigned short var_14 = (unsigned short)10222;
long long int var_15 = -7503060911579564968LL;
signed char var_16 = (signed char)-11;
unsigned char var_17 = (unsigned char)212;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 96326043U;
unsigned short var_20 = (unsigned short)13309;
unsigned char var_21 = (unsigned char)118;
unsigned short var_22 = (unsigned short)30780;
int arr_1 [17] ;
long long int arr_3 [17] [17] ;
unsigned char arr_6 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = 1665703534;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_3 [i_0] [i_1] = 9178736145365971349LL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_6 [i_0] = (unsigned char)171;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
