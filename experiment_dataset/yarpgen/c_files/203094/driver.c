#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-22393;
short var_4 = (short)25228;
signed char var_5 = (signed char)5;
unsigned short var_6 = (unsigned short)50314;
long long int var_13 = -2829791753649232427LL;
unsigned char var_14 = (unsigned char)133;
int zero = 0;
long long int var_16 = 4136789017186561601LL;
signed char var_17 = (signed char)5;
unsigned int var_18 = 1568089545U;
unsigned int var_19 = 3452357754U;
unsigned long long int var_20 = 3685346357601816434ULL;
long long int var_21 = -5804867625673148409LL;
unsigned long long int var_22 = 13963551810450140029ULL;
unsigned int arr_0 [13] ;
unsigned long long int arr_2 [13] ;
unsigned char arr_5 [22] ;
unsigned short arr_3 [13] [13] ;
unsigned char arr_6 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1155508221U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 18092488308169017010ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (unsigned char)95;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned short)62018;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_6 [i_0] = (unsigned char)61;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
