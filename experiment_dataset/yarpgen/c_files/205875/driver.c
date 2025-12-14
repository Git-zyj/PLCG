#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)80;
unsigned char var_9 = (unsigned char)156;
signed char var_13 = (signed char)120;
unsigned char var_14 = (unsigned char)65;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -5807631229319809701LL;
unsigned int var_20 = 606571537U;
signed char var_21 = (signed char)-77;
signed char var_22 = (signed char)-32;
unsigned char var_23 = (unsigned char)7;
unsigned char arr_1 [23] ;
_Bool arr_4 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        arr_1 [i_0] = (unsigned char)177;
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
