#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57065;
unsigned int var_2 = 473682960U;
unsigned short var_3 = (unsigned short)54620;
unsigned char var_5 = (unsigned char)51;
short var_7 = (short)26190;
int var_8 = -290272086;
unsigned char var_9 = (unsigned char)0;
int zero = 0;
unsigned char var_10 = (unsigned char)115;
unsigned int var_11 = 2248670029U;
signed char var_12 = (signed char)-121;
unsigned long long int arr_2 [20] ;
short arr_3 [20] ;
int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 3792735037410873898ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)-449;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = 88249277;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
