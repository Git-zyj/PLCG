#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)42287;
short var_1 = (short)7655;
_Bool var_2 = (_Bool)0;
short var_3 = (short)21500;
int var_5 = -1851896157;
unsigned short var_6 = (unsigned short)49938;
unsigned char var_8 = (unsigned char)215;
signed char var_9 = (signed char)-113;
unsigned int var_13 = 1953417581U;
int zero = 0;
long long int var_14 = 7213438084745120005LL;
int var_15 = -2060150437;
unsigned int var_16 = 326944259U;
int var_17 = 1695468732;
int var_18 = 1596822656;
long long int var_19 = -8380431768607703624LL;
unsigned long long int var_20 = 12072041142508755529ULL;
unsigned int arr_0 [10] ;
short arr_5 [10] [10] [10] ;
short arr_8 [10] [10] [10] [10] [10] ;
unsigned char arr_11 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 507259606U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? (short)-2503 : (short)-18982;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        arr_8 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_3 % 2 == 0) ? (short)1811 : (short)13795;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = (unsigned char)55;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
