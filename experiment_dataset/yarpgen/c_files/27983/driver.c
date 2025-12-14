#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)173;
_Bool var_3 = (_Bool)1;
int var_4 = 739148208;
unsigned char var_6 = (unsigned char)233;
int var_7 = -1682064938;
short var_9 = (short)-31290;
long long int var_10 = 5475865141611876511LL;
int zero = 0;
int var_11 = 825738498;
unsigned long long int var_12 = 3369695849644937631ULL;
short var_13 = (short)-21655;
_Bool var_14 = (_Bool)1;
unsigned long long int var_15 = 15408393632187395871ULL;
int var_16 = 1523943810;
unsigned int arr_0 [24] ;
_Bool arr_1 [24] [24] ;
unsigned char arr_2 [24] [24] ;
int arr_3 [17] ;
long long int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 2248880535U;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_1 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)10;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = 696941754;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 3739341161872538249LL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
