#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2550036844116338844LL;
unsigned long long int var_5 = 16881816531776142881ULL;
signed char var_6 = (signed char)90;
unsigned int var_7 = 1031776861U;
unsigned char var_8 = (unsigned char)101;
int zero = 0;
unsigned long long int var_10 = 13646001886685977821ULL;
unsigned char var_11 = (unsigned char)68;
unsigned short var_12 = (unsigned short)4640;
unsigned short var_13 = (unsigned short)20665;
int var_14 = 424438752;
_Bool var_15 = (_Bool)0;
unsigned char arr_2 [19] ;
unsigned long long int arr_3 [19] ;
signed char arr_4 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_2 [i_0] = (unsigned char)190;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 13142734960791973964ULL : 207302268141065177ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_4 [i_0] = (signed char)21;
}

void checksum() {
    hash(&seed, var_10);
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
