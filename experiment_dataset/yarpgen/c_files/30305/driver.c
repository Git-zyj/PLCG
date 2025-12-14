#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)0;
long long int var_3 = -8133155307956611347LL;
unsigned short var_4 = (unsigned short)27444;
unsigned int var_5 = 2317044120U;
unsigned short var_6 = (unsigned short)7479;
long long int var_7 = 6444026593318066793LL;
unsigned long long int var_8 = 6281578982101196631ULL;
unsigned short var_9 = (unsigned short)327;
unsigned char var_10 = (unsigned char)215;
int zero = 0;
unsigned short var_11 = (unsigned short)53832;
signed char var_12 = (signed char)-90;
unsigned char var_13 = (unsigned char)22;
unsigned short var_14 = (unsigned short)50711;
short arr_0 [12] [12] ;
unsigned char arr_1 [12] ;
unsigned int arr_2 [12] ;
long long int arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_0 [i_0] [i_1] = (short)7143;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned char)178;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = 674181657U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = 1979417069316046987LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
