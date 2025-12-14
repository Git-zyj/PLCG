#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 37213582015206789LL;
int var_5 = -1198576700;
long long int var_8 = 6155688372952382323LL;
unsigned char var_10 = (unsigned char)236;
long long int var_14 = 2637934899656137618LL;
unsigned char var_16 = (unsigned char)22;
int zero = 0;
unsigned short var_18 = (unsigned short)33271;
long long int var_19 = -1399453912083727937LL;
int var_20 = 1348174017;
signed char var_21 = (signed char)-91;
short arr_1 [10] [10] ;
unsigned char arr_2 [10] ;
unsigned long long int arr_4 [10] ;
short arr_6 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_1 [i_0] [i_1] = (short)21828;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = (unsigned char)161;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = 10489890554129572647ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_6 [i_0] [i_1] = (short)18061;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
