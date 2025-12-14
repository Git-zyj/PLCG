#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 434631722;
unsigned short var_5 = (unsigned short)64290;
long long int var_7 = 7479337916869010761LL;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)118;
long long int var_16 = -4635108559432099145LL;
int zero = 0;
signed char var_19 = (signed char)-106;
long long int var_20 = 8022792468237708907LL;
_Bool var_21 = (_Bool)1;
short var_22 = (short)5901;
signed char arr_5 [16] ;
int arr_9 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_5 [i_0] = (signed char)-114;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? -255252520 : -1815511544;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
