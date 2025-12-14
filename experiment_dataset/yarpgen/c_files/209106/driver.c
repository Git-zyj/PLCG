#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-27;
unsigned long long int var_1 = 3115757062050191620ULL;
signed char var_3 = (signed char)11;
signed char var_6 = (signed char)27;
unsigned char var_8 = (unsigned char)18;
_Bool var_16 = (_Bool)0;
unsigned short var_18 = (unsigned short)8743;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 17839026506292475667ULL;
unsigned char var_21 = (unsigned char)169;
unsigned int var_22 = 51910237U;
short var_23 = (short)-12299;
unsigned int var_24 = 4050571491U;
unsigned int var_25 = 1513766521U;
unsigned int var_26 = 3629331406U;
unsigned short var_27 = (unsigned short)45997;
long long int var_28 = 772724233460233127LL;
unsigned short var_29 = (unsigned short)51159;
unsigned long long int var_30 = 9588592746324794830ULL;
long long int var_31 = 5688520457562561804LL;
unsigned int var_32 = 933950955U;
int var_33 = -1120316559;
short arr_0 [15] [15] ;
_Bool arr_1 [15] ;
long long int arr_2 [15] ;
signed char arr_3 [15] ;
short arr_7 [15] [15] ;
unsigned int arr_9 [15] ;
unsigned short arr_11 [13] ;
unsigned int arr_10 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_0 [i_0] [i_1] = (short)13290;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = -7667891173344473LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (signed char)-77;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_7 [i_0] [i_1] = (i_1 % 2 == 0) ? (short)16182 : (short)23886;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_9 [i_0] = 803472072U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_11 [i_0] = (unsigned short)43813;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = 3680848221U;
}

void checksum() {
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
    hash(&seed, var_30);
    hash(&seed, var_31);
    hash(&seed, var_32);
    hash(&seed, var_33);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                hash(&seed, arr_10 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
