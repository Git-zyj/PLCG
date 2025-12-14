#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1582986204U;
unsigned short var_2 = (unsigned short)40731;
unsigned char var_4 = (unsigned char)53;
unsigned short var_6 = (unsigned short)47476;
unsigned short var_7 = (unsigned short)15091;
unsigned char var_8 = (unsigned char)152;
unsigned long long int var_10 = 6326468537787115866ULL;
unsigned short var_11 = (unsigned short)35896;
short var_12 = (short)31662;
unsigned short var_15 = (unsigned short)43057;
unsigned char var_16 = (unsigned char)225;
int zero = 0;
long long int var_20 = -8935908177365515486LL;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)239;
unsigned char var_23 = (unsigned char)78;
_Bool var_24 = (_Bool)1;
unsigned int arr_1 [16] ;
unsigned char arr_2 [16] ;
long long int arr_6 [16] ;
signed char arr_8 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 3314698363U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (unsigned char)12;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_6 [i_0] = -7967621460395185283LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_8 [i_0] [i_1] [i_2] = (signed char)20;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                hash(&seed, arr_8 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
