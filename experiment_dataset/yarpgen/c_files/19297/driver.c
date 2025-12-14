#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2537089201137401988ULL;
unsigned long long int var_8 = 10108351851004691524ULL;
unsigned int var_9 = 778042282U;
unsigned char var_11 = (unsigned char)171;
int zero = 0;
unsigned short var_20 = (unsigned short)59588;
unsigned long long int var_21 = 10046668741390299008ULL;
signed char var_22 = (signed char)-98;
unsigned short var_23 = (unsigned short)3133;
int var_24 = 510115592;
short arr_3 [22] ;
short arr_5 [22] [22] [22] ;
unsigned int arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = (short)31080;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-10004;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = 1317777272U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
