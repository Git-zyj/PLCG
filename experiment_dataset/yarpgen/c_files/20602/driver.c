#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)69;
unsigned long long int var_3 = 11623406548593897526ULL;
_Bool var_4 = (_Bool)1;
unsigned int var_9 = 1521212285U;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 4745242492769607257ULL;
unsigned short var_12 = (unsigned short)4209;
unsigned long long int var_16 = 12460121290407382900ULL;
int zero = 0;
unsigned short var_18 = (unsigned short)43885;
short var_19 = (short)-25200;
unsigned short var_20 = (unsigned short)53279;
unsigned char var_21 = (unsigned char)15;
unsigned long long int var_22 = 14077825402331706121ULL;
unsigned long long int arr_2 [18] ;
_Bool arr_7 [18] ;
signed char arr_8 [18] [18] ;
unsigned char arr_9 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_2 [i_0] = 6248819394873904123ULL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_7 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_8 [i_0] [i_1] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_9 [i_0] = (unsigned char)50;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
