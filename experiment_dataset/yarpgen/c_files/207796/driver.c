#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)149;
_Bool var_7 = (_Bool)0;
long long int var_8 = -896671324341240455LL;
unsigned short var_10 = (unsigned short)53844;
long long int var_11 = 9150493829808865756LL;
int zero = 0;
int var_12 = 1874063204;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-6925;
short var_15 = (short)15754;
unsigned char arr_1 [12] ;
int arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)173;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = 1294512221;
}

void checksum() {
    hash(&seed, var_12);
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
