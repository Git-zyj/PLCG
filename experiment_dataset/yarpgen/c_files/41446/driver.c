#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9680693113355433216ULL;
unsigned char var_3 = (unsigned char)149;
short var_8 = (short)-489;
unsigned long long int var_10 = 15391234209544932199ULL;
short var_12 = (short)9871;
int zero = 0;
unsigned int var_14 = 802126028U;
_Bool var_15 = (_Bool)0;
short var_16 = (short)-25525;
short var_17 = (short)1107;
signed char var_18 = (signed char)2;
unsigned int arr_0 [17] [17] ;
signed char arr_1 [17] ;
unsigned long long int arr_4 [17] [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 3787218083U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (signed char)113;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            for (size_t i_2 = 0; i_2 < 17; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 9188735146825593954ULL : 16336717708480780321ULL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
