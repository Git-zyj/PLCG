#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1118549352;
short var_2 = (short)18723;
short var_3 = (short)21937;
unsigned long long int var_6 = 6379139237341740045ULL;
short var_8 = (short)3746;
int zero = 0;
unsigned char var_10 = (unsigned char)154;
int var_11 = -1839341223;
short var_12 = (short)-26142;
unsigned short var_13 = (unsigned short)41172;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 7324609780353543206ULL;
unsigned short var_16 = (unsigned short)44450;
signed char var_17 = (signed char)78;
signed char arr_1 [17] ;
int arr_2 [17] ;
short arr_4 [17] ;
long long int arr_5 [22] ;
unsigned char arr_7 [22] [22] [22] ;
unsigned char arr_8 [22] [22] ;
unsigned long long int arr_12 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)102;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_2 [i_0] = -2050680794;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (short)-12710;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = -4476989510981655050LL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)81 : (unsigned char)70;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_8 [i_0] [i_1] = (unsigned char)98;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_12 [i_0] [i_1] [i_2] = 12883636642655356239ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
