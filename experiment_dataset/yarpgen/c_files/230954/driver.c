#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1479018420;
signed char var_2 = (signed char)-91;
unsigned long long int var_3 = 17690910394877783748ULL;
unsigned char var_4 = (unsigned char)115;
unsigned long long int var_5 = 16525003434606035438ULL;
signed char var_6 = (signed char)-67;
unsigned char var_11 = (unsigned char)24;
long long int var_12 = -8953264394262365990LL;
int zero = 0;
unsigned char var_14 = (unsigned char)101;
unsigned long long int var_15 = 13692414172625417067ULL;
signed char var_16 = (signed char)-24;
unsigned char var_17 = (unsigned char)125;
unsigned char var_18 = (unsigned char)181;
unsigned char var_19 = (unsigned char)9;
_Bool var_20 = (_Bool)0;
unsigned int arr_5 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? 3090880318U : 85952502U;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                hash(&seed, arr_5 [i_0] [i_1] [i_2] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
