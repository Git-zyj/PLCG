#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_2 = (unsigned char)211;
signed char var_5 = (signed char)-40;
_Bool var_7 = (_Bool)0;
unsigned int var_8 = 2414818525U;
unsigned char var_9 = (unsigned char)105;
signed char var_11 = (signed char)-38;
long long int var_12 = -1658385803376244135LL;
int zero = 0;
unsigned short var_17 = (unsigned short)57265;
unsigned int var_18 = 3986815314U;
int var_19 = -62264024;
unsigned long long int var_20 = 13960333836803155213ULL;
_Bool var_21 = (_Bool)1;
long long int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
unsigned short arr_2 [19] [19] ;
unsigned char arr_5 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = 2814099275960840460LL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 8156028555343308995ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned short)54952 : (unsigned short)15850;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned char)125 : (unsigned char)193;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
