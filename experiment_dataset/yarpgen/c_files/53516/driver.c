#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)8956;
_Bool var_2 = (_Bool)0;
unsigned long long int var_7 = 13715478601724617628ULL;
unsigned long long int var_12 = 10027441882358093672ULL;
int zero = 0;
unsigned long long int var_13 = 730550172773667355ULL;
unsigned short var_14 = (unsigned short)7215;
int var_15 = 1210184716;
_Bool var_16 = (_Bool)0;
int var_17 = 1410798706;
unsigned long long int arr_0 [15] ;
int arr_1 [15] ;
signed char arr_2 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 319028569648116879ULL : 16648296313588039193ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = 2125692676;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)25 : (signed char)-41;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_2 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
