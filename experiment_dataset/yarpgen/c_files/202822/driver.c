#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5283880651462959913LL;
unsigned long long int var_3 = 10376860259891038467ULL;
unsigned long long int var_8 = 14363970206476929940ULL;
short var_9 = (short)32298;
unsigned long long int var_14 = 4802440709126005796ULL;
short var_17 = (short)19391;
int zero = 0;
long long int var_18 = 1873803721475720647LL;
short var_19 = (short)-11676;
unsigned long long int var_20 = 9238618206775915803ULL;
unsigned char var_21 = (unsigned char)241;
unsigned char var_22 = (unsigned char)43;
unsigned char arr_0 [17] [17] ;
unsigned char arr_2 [17] [17] ;
short arr_3 [17] ;
unsigned long long int arr_4 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)205 : (unsigned char)82;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (unsigned char)35 : (unsigned char)83;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)23436 : (short)-10389;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? 9723737440400067449ULL : 2173674419163644235ULL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
