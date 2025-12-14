#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 625940167;
signed char var_7 = (signed char)-62;
int var_9 = -31350052;
unsigned char var_11 = (unsigned char)104;
unsigned short var_12 = (unsigned short)24815;
unsigned char var_15 = (unsigned char)124;
unsigned long long int var_16 = 8251370046752094412ULL;
int zero = 0;
long long int var_17 = -204890696101871660LL;
short var_18 = (short)14505;
short var_19 = (short)-27057;
unsigned long long int var_20 = 4688011601684205555ULL;
unsigned long long int var_21 = 18131689045687137049ULL;
unsigned char arr_0 [18] ;
unsigned int arr_1 [18] ;
unsigned char arr_3 [18] [18] ;
short arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)36 : (unsigned char)224;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 2739799610U : 2167393022U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (unsigned char)202;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (short)-27534 : (short)-8344;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
