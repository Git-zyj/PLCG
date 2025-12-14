#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)124;
short var_3 = (short)17575;
unsigned long long int var_5 = 8139743305341796190ULL;
unsigned int var_6 = 1879701302U;
unsigned long long int var_8 = 11358425766329865643ULL;
short var_13 = (short)12090;
unsigned long long int var_15 = 2548848642410379250ULL;
short var_16 = (short)-9930;
unsigned int var_18 = 3184249782U;
int zero = 0;
unsigned char var_19 = (unsigned char)183;
long long int var_20 = -8681061921785793924LL;
unsigned long long int var_21 = 10284629333714264697ULL;
signed char var_22 = (signed char)-37;
unsigned long long int arr_1 [21] ;
unsigned long long int arr_3 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = 16801213318611795389ULL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_3 [i_0] = 7548117413248334459ULL;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
