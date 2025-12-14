#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)90;
unsigned short var_7 = (unsigned short)16575;
int var_9 = 1915859223;
unsigned int var_11 = 224347692U;
unsigned int var_12 = 1596358847U;
short var_13 = (short)-2067;
_Bool var_15 = (_Bool)1;
int var_16 = 1508486062;
int var_17 = 1874219410;
int zero = 0;
long long int var_19 = 7606745840134654631LL;
_Bool var_20 = (_Bool)1;
long long int var_21 = 5583688602745215091LL;
long long int var_22 = 4154666178009067779LL;
unsigned short var_23 = (unsigned short)3685;
signed char var_24 = (signed char)-27;
_Bool var_25 = (_Bool)1;
signed char arr_1 [14] ;
short arr_2 [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = (signed char)34;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-17560;
}

void checksum() {
    hash(&seed, var_19);
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
