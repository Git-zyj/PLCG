#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-20;
unsigned int var_3 = 4070206377U;
long long int var_4 = -4476830019901373762LL;
signed char var_6 = (signed char)-4;
unsigned int var_7 = 3467225962U;
unsigned long long int var_9 = 2433556235033658019ULL;
unsigned short var_10 = (unsigned short)26113;
int var_11 = 1620809854;
int zero = 0;
int var_16 = -701922420;
unsigned char var_17 = (unsigned char)22;
short var_18 = (short)-12412;
unsigned char var_19 = (unsigned char)236;
unsigned char arr_0 [13] [13] ;
unsigned char arr_1 [13] ;
unsigned long long int arr_2 [13] [13] ;
unsigned int arr_3 [13] [13] [13] ;
unsigned short arr_4 [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)214;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_1 [i_0] = (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_2 [i_0] [i_1] = 11912649210311534234ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 2875390909U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)60101;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
