#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-101;
unsigned long long int var_3 = 14041791801716687720ULL;
long long int var_4 = -6362246315159220936LL;
short var_5 = (short)25028;
unsigned short var_11 = (unsigned short)37626;
unsigned int var_15 = 3093946527U;
int zero = 0;
unsigned long long int var_17 = 13139288957162263890ULL;
short var_18 = (short)-8449;
_Bool var_19 = (_Bool)1;
_Bool var_20 = (_Bool)1;
int var_21 = -1110826282;
unsigned long long int var_22 = 5773872298566085628ULL;
_Bool arr_0 [14] [14] ;
unsigned long long int arr_1 [14] [14] ;
unsigned char arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_0 [i_0] [i_1] = (_Bool)0;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = 11464800523550193460ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (unsigned char)0;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
