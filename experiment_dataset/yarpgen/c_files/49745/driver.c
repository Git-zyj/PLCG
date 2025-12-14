#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-18;
long long int var_1 = 6957852573713926799LL;
unsigned short var_3 = (unsigned short)12918;
int var_5 = -701470056;
short var_6 = (short)-26365;
unsigned int var_8 = 2422921107U;
unsigned char var_10 = (unsigned char)180;
int zero = 0;
unsigned long long int var_11 = 580628572490376804ULL;
unsigned int var_12 = 2122476248U;
unsigned char var_13 = (unsigned char)46;
unsigned char var_14 = (unsigned char)62;
unsigned long long int var_15 = 6779048623588207262ULL;
signed char arr_0 [11] ;
_Bool arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = (signed char)-59;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (_Bool)0 : (_Bool)0;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
