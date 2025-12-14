#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6522867610104424133LL;
unsigned long long int var_1 = 13750179348684617654ULL;
signed char var_2 = (signed char)-32;
unsigned long long int var_3 = 8690623264823099421ULL;
int var_4 = -325750741;
long long int var_5 = 673406607348055474LL;
unsigned short var_6 = (unsigned short)19159;
unsigned long long int var_7 = 8574392903980164381ULL;
unsigned char var_8 = (unsigned char)173;
signed char var_9 = (signed char)-64;
long long int var_11 = 5035232600800656848LL;
signed char var_12 = (signed char)47;
long long int var_13 = -696500357310779773LL;
long long int var_15 = -4851206636431225706LL;
unsigned char var_16 = (unsigned char)192;
unsigned short var_18 = (unsigned short)58012;
int zero = 0;
long long int var_19 = -5037647057054385452LL;
long long int var_20 = 9063230514677645924LL;
unsigned short var_21 = (unsigned short)12632;
unsigned long long int var_22 = 8101896098400812006ULL;
long long int var_23 = -5277089049053508199LL;
unsigned char var_24 = (unsigned char)30;
signed char var_25 = (signed char)-28;
unsigned long long int arr_0 [24] ;
long long int arr_1 [24] ;
unsigned char arr_3 [24] ;
long long int arr_4 [24] [24] [24] ;
unsigned short arr_6 [24] [24] [24] ;
unsigned long long int arr_14 [16] [16] [16] ;
int arr_7 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 3671886026185627661ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = -3071858106964451640LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (unsigned char)16;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 1162290837201887011LL : 1260998457578731581LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (unsigned short)16924 : (unsigned short)46066;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_14 [i_0] [i_1] [i_2] = 17633095233153926942ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? -1033291055 : -828863715;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                hash(&seed, arr_7 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
