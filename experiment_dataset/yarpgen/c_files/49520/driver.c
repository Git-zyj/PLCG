#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -6283155575476048501LL;
unsigned long long int var_4 = 11148138229106675675ULL;
unsigned long long int var_6 = 15943200337277695864ULL;
unsigned char var_8 = (unsigned char)180;
signed char var_10 = (signed char)58;
long long int var_11 = -493003109659315832LL;
unsigned char var_14 = (unsigned char)219;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)61246;
unsigned int var_17 = 4219208396U;
signed char var_18 = (signed char)78;
unsigned int arr_2 [22] ;
unsigned long long int arr_3 [22] ;
unsigned short arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = 512059433U;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_3 [i_0] = 2691287074953471916ULL;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (unsigned short)859 : (unsigned short)27782;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
