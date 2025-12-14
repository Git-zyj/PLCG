#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_11 = 868152003;
unsigned int var_12 = 3797058610U;
signed char var_15 = (signed char)47;
int zero = 0;
long long int var_18 = -5034132817616225896LL;
signed char var_19 = (signed char)-80;
long long int var_20 = -107641711457596691LL;
signed char var_21 = (signed char)-66;
signed char var_22 = (signed char)-27;
signed char var_23 = (signed char)-66;
long long int var_24 = -2085614144955043559LL;
unsigned short var_25 = (unsigned short)13766;
signed char var_26 = (signed char)-81;
long long int arr_0 [16] ;
unsigned int arr_1 [16] ;
unsigned char arr_3 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 5295496297028100323LL;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 2303997822U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned char)238 : (unsigned char)146;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
