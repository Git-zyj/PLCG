#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)173;
unsigned short var_4 = (unsigned short)55984;
unsigned char var_7 = (unsigned char)68;
unsigned char var_9 = (unsigned char)29;
unsigned char var_10 = (unsigned char)103;
unsigned char var_15 = (unsigned char)25;
unsigned int var_16 = 2489948106U;
int zero = 0;
_Bool var_17 = (_Bool)1;
short var_18 = (short)-16196;
unsigned char var_19 = (unsigned char)112;
unsigned int var_20 = 3973190421U;
short var_21 = (short)-21955;
unsigned char var_22 = (unsigned char)43;
long long int arr_1 [18] ;
_Bool arr_4 [18] [18] ;
short arr_5 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_1 [i_0] = 5397516374946177998LL;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (short)-22575;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
