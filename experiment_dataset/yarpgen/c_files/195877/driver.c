#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)5725;
short var_3 = (short)-14718;
unsigned int var_4 = 2186739857U;
unsigned char var_5 = (unsigned char)190;
long long int var_7 = -1519788597976736636LL;
unsigned long long int var_8 = 2126822281163843970ULL;
int var_9 = 1708905351;
int zero = 0;
unsigned int var_10 = 1524321866U;
unsigned long long int var_11 = 6710338860435495675ULL;
int var_12 = -438969338;
int var_13 = -874134794;
unsigned char var_14 = (unsigned char)211;
signed char arr_0 [16] ;
unsigned long long int arr_2 [16] ;
unsigned long long int arr_4 [16] ;
unsigned char arr_5 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)-25;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = 556292935374750159ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_4 [i_0] = 15466559379471287390ULL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)50;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
