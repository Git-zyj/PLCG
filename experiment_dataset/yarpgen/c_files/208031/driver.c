#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)63345;
int var_2 = -1613820356;
unsigned long long int var_3 = 17467302581308269705ULL;
signed char var_4 = (signed char)120;
signed char var_9 = (signed char)106;
int var_10 = 1521261492;
unsigned char var_11 = (unsigned char)77;
int var_12 = -1705211305;
unsigned short var_14 = (unsigned short)24573;
int var_16 = -196314081;
unsigned int var_17 = 3541243139U;
short var_18 = (short)-21550;
int zero = 0;
signed char var_19 = (signed char)-60;
int var_20 = -653797572;
long long int arr_0 [24] ;
unsigned short arr_2 [24] ;
short arr_3 [24] ;
short arr_4 [24] ;
long long int arr_5 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = -4978781179015023126LL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)45566;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = (short)4715;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (short)1398;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_5 [i_0] [i_1] = 7048539891955607208LL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_4 [i_0] );
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
