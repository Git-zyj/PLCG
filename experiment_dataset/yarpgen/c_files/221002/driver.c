#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-109;
unsigned char var_2 = (unsigned char)135;
unsigned int var_4 = 4253024582U;
unsigned int var_6 = 4007104522U;
unsigned char var_7 = (unsigned char)220;
unsigned char var_8 = (unsigned char)142;
signed char var_9 = (signed char)-107;
unsigned int var_10 = 3839535439U;
int zero = 0;
unsigned char var_11 = (unsigned char)202;
unsigned char var_12 = (unsigned char)19;
unsigned short var_13 = (unsigned short)49511;
unsigned char var_14 = (unsigned char)214;
int arr_0 [17] ;
unsigned char arr_2 [17] [17] ;
unsigned int arr_5 [17] ;
unsigned short arr_6 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = -1216811960;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)105;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_5 [i_0] = 3584239070U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_6 [i_0] [i_1] = (unsigned short)6005;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
