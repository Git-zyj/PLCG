#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 6117617547271603805ULL;
unsigned long long int var_4 = 5348885139435358341ULL;
unsigned char var_5 = (unsigned char)139;
long long int var_9 = 1731744317830583727LL;
unsigned char var_10 = (unsigned char)120;
unsigned int var_11 = 3038612754U;
int zero = 0;
unsigned short var_13 = (unsigned short)1383;
short var_14 = (short)-12488;
unsigned int var_15 = 4071972320U;
unsigned char arr_0 [10] ;
unsigned int arr_4 [10] [10] ;
_Bool arr_6 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)135;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? 4284907085U : 482732889U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_6 [i_0] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
