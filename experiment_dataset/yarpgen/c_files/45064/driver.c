#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)17612;
unsigned long long int var_4 = 13001319392237972975ULL;
int var_5 = 1898494472;
short var_6 = (short)20847;
int var_7 = 491369545;
unsigned short var_9 = (unsigned short)38586;
unsigned long long int var_10 = 4317634492877507835ULL;
int zero = 0;
unsigned short var_14 = (unsigned short)39074;
long long int var_15 = 811406770379226217LL;
signed char var_16 = (signed char)-109;
unsigned short var_17 = (unsigned short)17160;
unsigned long long int var_18 = 12719035413470856023ULL;
unsigned int var_19 = 3020470836U;
unsigned char var_20 = (unsigned char)21;
long long int var_21 = 2974712000628152484LL;
unsigned long long int arr_1 [17] [17] ;
unsigned long long int arr_4 [17] ;
_Bool arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_1 [i_0] [i_1] = 8208882286144953843ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = 2979185459029164312ULL;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
