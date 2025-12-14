#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2819153297U;
unsigned char var_2 = (unsigned char)158;
unsigned short var_3 = (unsigned short)29673;
unsigned int var_4 = 507614304U;
unsigned char var_5 = (unsigned char)75;
long long int var_6 = -7024289822081536714LL;
int zero = 0;
unsigned long long int var_10 = 9067308081933890287ULL;
_Bool var_11 = (_Bool)1;
unsigned short var_12 = (unsigned short)22120;
unsigned char var_13 = (unsigned char)164;
unsigned char var_14 = (unsigned char)77;
signed char arr_0 [24] ;
unsigned char arr_1 [24] ;
long long int arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (signed char)12;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = (unsigned char)36;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = 8287575123469356820LL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
