#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 411353747U;
short var_4 = (short)26031;
long long int var_5 = 7959397679733694607LL;
short var_7 = (short)1881;
short var_8 = (short)-25435;
unsigned int var_9 = 2874260781U;
int var_10 = 201908935;
unsigned long long int var_11 = 1218835899073955776ULL;
int zero = 0;
short var_12 = (short)-8700;
int var_13 = 847254077;
unsigned short var_14 = (unsigned short)17320;
short var_15 = (short)11425;
short var_16 = (short)16579;
long long int arr_5 [23] [23] ;
unsigned long long int arr_10 [23] [23] [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_5 [i_0] [i_1] = -6488606322266651709LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                for (size_t i_3 = 0; i_3 < 23; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 23; ++i_4) 
                        arr_10 [i_0] [i_1] [i_2] [i_3] [i_4] = (i_1 % 2 == 0) ? 2587117288623548563ULL : 3508406680662914069ULL;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
