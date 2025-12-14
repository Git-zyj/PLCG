#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 1981264087U;
unsigned char var_3 = (unsigned char)75;
unsigned int var_8 = 4287723464U;
short var_9 = (short)25432;
unsigned char var_11 = (unsigned char)166;
unsigned char var_12 = (unsigned char)87;
int zero = 0;
signed char var_14 = (signed char)7;
unsigned char var_15 = (unsigned char)94;
unsigned int var_16 = 902123993U;
short var_17 = (short)-29037;
unsigned long long int var_18 = 15508545957228069627ULL;
unsigned int arr_0 [13] ;
unsigned int arr_2 [13] ;
unsigned short arr_4 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_0 [i_0] = 1492491314U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = 3305822615U;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_4 [i_0] = (unsigned short)61563;
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
