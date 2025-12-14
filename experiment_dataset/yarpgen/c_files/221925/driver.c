#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 826009493;
unsigned long long int var_6 = 16730856868792974664ULL;
signed char var_7 = (signed char)120;
long long int var_12 = 428211429934398367LL;
int var_14 = -1319139578;
int zero = 0;
long long int var_15 = -1209544630056606212LL;
signed char var_16 = (signed char)-50;
unsigned long long int var_17 = 1191033940157460362ULL;
unsigned char var_18 = (unsigned char)209;
signed char var_19 = (signed char)-69;
long long int arr_6 [13] ;
unsigned short arr_2 [25] ;
unsigned long long int arr_7 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_6 [i_0] = 5801783714972916448LL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned short)53215;
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_7 [i_0] = 496753902045444546ULL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        hash(&seed, arr_2 [i_0] );
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
