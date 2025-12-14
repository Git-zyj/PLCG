#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 5234106440187734772LL;
unsigned char var_1 = (unsigned char)3;
int var_4 = 2069241363;
unsigned int var_5 = 1739573906U;
_Bool var_6 = (_Bool)1;
unsigned int var_7 = 1957540839U;
unsigned short var_11 = (unsigned short)3098;
int zero = 0;
short var_13 = (short)18266;
int var_14 = -873359806;
unsigned short var_15 = (unsigned short)57828;
unsigned long long int var_16 = 17622547771909613010ULL;
short var_17 = (short)28766;
unsigned char var_18 = (unsigned char)194;
int arr_0 [10] [10] ;
unsigned short arr_3 [10] ;
unsigned long long int arr_4 [16] ;
int arr_5 [16] ;
long long int arr_6 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_0 [i_0] [i_1] = 2080054931;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (unsigned short)23003;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 16561274184307527845ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = 113137420;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_6 [i_0] [i_1] = -3108132430212215779LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
