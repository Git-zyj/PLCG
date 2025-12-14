#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10659127163034207182ULL;
long long int var_1 = 2046544386014047229LL;
unsigned char var_2 = (unsigned char)181;
int var_3 = 1158313757;
long long int var_4 = -3997042859063030110LL;
unsigned long long int var_5 = 12094256608512691365ULL;
short var_6 = (short)24820;
unsigned char var_8 = (unsigned char)182;
long long int var_9 = -2324169184124460872LL;
int zero = 0;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 12253467163229407210ULL;
unsigned long long int var_12 = 6558984341295210904ULL;
unsigned int arr_4 [11] [11] ;
long long int arr_5 [11] ;
unsigned char arr_6 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_4 [i_0] [i_1] = 2449087479U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? -684171341110175594LL : -5434528468551628419LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_6 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)201 : (unsigned char)219;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_5 [i_0] );
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            hash(&seed, arr_6 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
