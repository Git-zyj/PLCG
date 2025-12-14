#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 3281162747065818856ULL;
unsigned char var_4 = (unsigned char)86;
short var_5 = (short)11150;
unsigned short var_7 = (unsigned short)25906;
unsigned long long int var_10 = 7818025648350055528ULL;
short var_11 = (short)25614;
int zero = 0;
short var_12 = (short)-29323;
short var_13 = (short)-29465;
unsigned char var_14 = (unsigned char)15;
_Bool var_15 = (_Bool)1;
int var_16 = 1128948558;
unsigned short var_17 = (unsigned short)21786;
long long int var_18 = -140397096680788542LL;
int arr_1 [16] ;
long long int arr_3 [18] ;
short arr_5 [18] ;
int arr_7 [18] [18] ;
unsigned char arr_9 [18] [18] [18] ;
unsigned char arr_2 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = -2021187807;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_3 [i_0] = -7060917905737132460LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (short)-7865;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_7 [i_0] [i_1] = 611734126;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = (unsigned char)31;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)144;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
