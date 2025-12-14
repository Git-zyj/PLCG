#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)14111;
unsigned int var_11 = 1401325263U;
unsigned long long int var_12 = 1750384720598435417ULL;
unsigned char var_14 = (unsigned char)167;
int zero = 0;
short var_15 = (short)-4242;
signed char var_16 = (signed char)48;
unsigned short var_17 = (unsigned short)18091;
short var_18 = (short)-21902;
unsigned long long int var_19 = 6523189207892300160ULL;
short var_20 = (short)-25181;
long long int var_21 = -4961289519473951843LL;
_Bool var_22 = (_Bool)0;
signed char arr_0 [25] ;
unsigned long long int arr_1 [25] ;
unsigned long long int arr_5 [13] ;
int arr_2 [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = (signed char)126;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = 8153177409938993432ULL;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_5 [i_0] = 6940406439097595154ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            arr_2 [i_0] [i_1] = 92228104;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
