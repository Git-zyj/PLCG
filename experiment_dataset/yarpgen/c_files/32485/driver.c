#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 241420163U;
int var_6 = 1343525725;
short var_9 = (short)-27610;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)25649;
int zero = 0;
unsigned char var_16 = (unsigned char)40;
unsigned short var_17 = (unsigned short)26552;
unsigned long long int var_18 = 12492395617609521159ULL;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)188;
unsigned char var_21 = (unsigned char)224;
signed char var_22 = (signed char)19;
unsigned char arr_0 [10] ;
unsigned int arr_1 [10] ;
_Bool arr_3 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)66;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 2517874710U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_3 [i_0] = (_Bool)0;
}

void checksum() {
    hash(&seed, var_16);
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
