#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)122;
unsigned char var_3 = (unsigned char)104;
unsigned char var_5 = (unsigned char)99;
long long int var_6 = -8862306951651766740LL;
unsigned char var_9 = (unsigned char)89;
int zero = 0;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)252;
unsigned long long int var_13 = 10830742507021652082ULL;
unsigned char var_14 = (unsigned char)253;
unsigned long long int var_15 = 10363302827618322783ULL;
unsigned char var_16 = (unsigned char)142;
signed char var_17 = (signed char)71;
signed char var_18 = (signed char)-77;
_Bool arr_0 [16] [16] ;
int arr_1 [16] ;
int arr_2 [16] ;
unsigned char arr_3 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 65887859;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 241193267;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_3 [i_0] = (unsigned char)240;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
