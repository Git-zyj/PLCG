#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-119;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 11612957013160185205ULL;
unsigned long long int var_4 = 664493461415151433ULL;
unsigned int var_5 = 4028184456U;
unsigned int var_6 = 2489419143U;
long long int var_9 = -1996296335927731987LL;
unsigned long long int var_11 = 4413474752620045777ULL;
int var_12 = -2119258884;
unsigned int var_13 = 30233847U;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = 7081922872627688479LL;
unsigned long long int var_16 = 9847399975606453654ULL;
unsigned long long int var_17 = 1282322532123611787ULL;
int var_18 = 418338484;
signed char arr_0 [21] ;
signed char arr_1 [21] ;
unsigned short arr_2 [21] ;
unsigned char arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (signed char)79 : (signed char)44;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (signed char)-60 : (signed char)-95;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_2 [i_0] = (unsigned short)54242;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = (unsigned char)157;
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
