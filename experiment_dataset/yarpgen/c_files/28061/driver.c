#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3648734506U;
unsigned long long int var_2 = 8819080723108213200ULL;
unsigned short var_3 = (unsigned short)34350;
int var_4 = -1466097644;
unsigned int var_6 = 3267708478U;
unsigned int var_7 = 3914867038U;
unsigned int var_8 = 1171084709U;
unsigned int var_10 = 809013848U;
unsigned int var_11 = 2020151138U;
unsigned short var_12 = (unsigned short)894;
unsigned int var_14 = 4077598778U;
int zero = 0;
unsigned short var_16 = (unsigned short)47947;
unsigned int var_17 = 937333004U;
unsigned int arr_0 [22] ;
signed char arr_1 [22] [22] ;
int arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1502503604U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_1 [i_0] [i_1] = (signed char)30;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? 342491779 : 2098492305;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
