#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48893;
unsigned short var_3 = (unsigned short)19887;
unsigned int var_9 = 1902662251U;
int var_10 = 1990436515;
signed char var_11 = (signed char)-102;
signed char var_14 = (signed char)16;
int var_15 = -671762424;
long long int var_16 = -7181690283605670876LL;
int zero = 0;
unsigned long long int var_20 = 1308636450831850266ULL;
unsigned int var_21 = 3140859043U;
signed char var_22 = (signed char)-77;
int var_23 = 1318084923;
unsigned char var_24 = (unsigned char)240;
signed char var_25 = (signed char)123;
long long int arr_2 [23] ;
int arr_3 [23] [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_2 [i_0] = -2944237415643468350LL;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            for (size_t i_2 = 0; i_2 < 23; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = -1301519778;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
