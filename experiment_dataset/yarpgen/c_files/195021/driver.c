#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1433914220U;
unsigned long long int var_2 = 7817467106137447695ULL;
short var_3 = (short)-8899;
unsigned short var_12 = (unsigned short)25621;
unsigned long long int var_16 = 1450439032426446927ULL;
short var_17 = (short)21785;
int zero = 0;
unsigned short var_18 = (unsigned short)64575;
long long int var_19 = -2892101966697894860LL;
unsigned short var_20 = (unsigned short)18131;
unsigned char var_21 = (unsigned char)15;
unsigned long long int arr_0 [14] ;
long long int arr_1 [14] [14] ;
signed char arr_2 [14] ;
signed char arr_4 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = 7832860781243656146ULL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_1 [i_0] [i_1] = -9146388663908177309LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (signed char)59;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (signed char)8;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
