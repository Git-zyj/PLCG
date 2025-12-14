#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)52;
unsigned char var_3 = (unsigned char)156;
unsigned long long int var_4 = 15855074219273046757ULL;
unsigned short var_7 = (unsigned short)32127;
unsigned char var_8 = (unsigned char)224;
long long int var_9 = 52954349434096087LL;
int var_10 = 429093752;
int zero = 0;
short var_12 = (short)12058;
int var_13 = -829047966;
unsigned short var_14 = (unsigned short)44305;
long long int var_15 = -537586084548148815LL;
unsigned short var_16 = (unsigned short)30875;
unsigned int var_17 = 2391460299U;
unsigned short arr_1 [16] [16] ;
_Bool arr_2 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned short)15128;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
