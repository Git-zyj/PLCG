#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-27725;
int var_3 = 718642957;
short var_4 = (short)8438;
short var_7 = (short)-1972;
short var_8 = (short)28837;
long long int var_9 = -6030404834633606707LL;
unsigned int var_10 = 766710391U;
short var_11 = (short)29680;
int zero = 0;
signed char var_12 = (signed char)-68;
short var_13 = (short)-8476;
int var_14 = -1442715987;
unsigned short arr_0 [17] ;
unsigned char arr_1 [17] ;
signed char arr_3 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (unsigned short)11432;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_1 [i_0] = (unsigned char)215;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (signed char)62;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
