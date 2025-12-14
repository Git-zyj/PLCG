#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -345382678;
unsigned short var_2 = (unsigned short)12832;
signed char var_3 = (signed char)-105;
unsigned char var_4 = (unsigned char)114;
unsigned short var_7 = (unsigned short)657;
_Bool var_9 = (_Bool)0;
unsigned int var_10 = 4053082793U;
int zero = 0;
int var_12 = 1047637833;
signed char var_13 = (signed char)-123;
int var_14 = -1873015765;
long long int var_15 = -1169751095254813989LL;
unsigned char var_16 = (unsigned char)109;
unsigned char arr_13 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_13 [i_0] = (unsigned char)56;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_13 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
