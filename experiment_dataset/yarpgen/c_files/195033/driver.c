#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 617537412;
short var_2 = (short)13339;
_Bool var_3 = (_Bool)0;
unsigned char var_5 = (unsigned char)40;
short var_6 = (short)697;
unsigned short var_7 = (unsigned short)27141;
unsigned char var_8 = (unsigned char)117;
unsigned char var_9 = (unsigned char)166;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)0;
unsigned char var_13 = (unsigned char)72;
unsigned long long int arr_2 [10] ;
_Bool arr_3 [10] ;
unsigned char arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 8938657027339273032ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (unsigned char)142;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
