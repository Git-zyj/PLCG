#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)103;
unsigned int var_1 = 3996083816U;
signed char var_2 = (signed char)99;
signed char var_3 = (signed char)29;
unsigned short var_4 = (unsigned short)14832;
unsigned int var_5 = 3270595170U;
unsigned char var_6 = (unsigned char)156;
short var_7 = (short)15405;
int var_9 = -1570333032;
int zero = 0;
unsigned short var_10 = (unsigned short)32955;
unsigned short var_11 = (unsigned short)13338;
unsigned char var_12 = (unsigned char)99;
unsigned char var_13 = (unsigned char)44;
signed char var_14 = (signed char)-70;
short var_15 = (short)28006;
unsigned short var_16 = (unsigned short)39518;
unsigned char var_17 = (unsigned char)1;
unsigned long long int var_18 = 14637292664578559908ULL;
signed char arr_0 [13] [13] ;
unsigned char arr_4 [13] [13] ;
unsigned short arr_7 [13] ;
signed char arr_9 [13] [13] [13] [13] ;
unsigned short arr_15 [15] ;
signed char arr_16 [15] [15] ;
long long int arr_17 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_0 [i_0] [i_1] = (signed char)-75;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned char)90;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = (unsigned short)47502;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                for (size_t i_3 = 0; i_3 < 13; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (signed char)-47;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_15 [i_0] = (unsigned short)39816;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_16 [i_0] [i_1] = (signed char)-37;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_17 [i_0] [i_1] = -5584543830689443947LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_16 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            hash(&seed, arr_17 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
