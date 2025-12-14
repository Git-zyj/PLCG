#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)7;
int var_2 = 1082596442;
int var_3 = 1155535482;
unsigned char var_4 = (unsigned char)253;
long long int var_5 = -6596702499554667711LL;
unsigned char var_6 = (unsigned char)226;
int var_7 = -561012535;
unsigned int var_9 = 4206811442U;
unsigned int var_10 = 1115824163U;
unsigned long long int var_11 = 1312266845658546281ULL;
int zero = 0;
long long int var_12 = -2688475665102476217LL;
unsigned short var_13 = (unsigned short)15121;
long long int var_14 = 3059906176188497079LL;
_Bool var_15 = (_Bool)0;
signed char arr_0 [11] ;
unsigned short arr_2 [11] ;
unsigned long long int arr_4 [11] [11] ;
unsigned long long int arr_5 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)90;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (unsigned short)38478;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 7483459396759109868ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = 610192731666138599ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
