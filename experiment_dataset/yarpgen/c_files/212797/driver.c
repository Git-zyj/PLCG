#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4605408023125653928ULL;
short var_3 = (short)12078;
unsigned short var_5 = (unsigned short)1185;
signed char var_10 = (signed char)102;
long long int var_11 = -7170867609245508930LL;
unsigned char var_14 = (unsigned char)50;
int zero = 0;
unsigned char var_17 = (unsigned char)239;
signed char var_18 = (signed char)-68;
long long int var_19 = 4043798901727778996LL;
unsigned short var_20 = (unsigned short)34679;
short var_21 = (short)28546;
unsigned short arr_0 [24] ;
unsigned short arr_2 [24] ;
long long int arr_3 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)31364;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (unsigned short)1272;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_3 [i_0] = 6868600572490631052LL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
