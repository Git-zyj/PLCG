#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1088713050;
signed char var_1 = (signed char)-3;
int var_5 = -1489635578;
short var_8 = (short)-24567;
_Bool var_9 = (_Bool)0;
long long int var_10 = 6554439289997471405LL;
int zero = 0;
long long int var_14 = -3989424343458095408LL;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-67;
long long int var_17 = -6564633140831341828LL;
long long int arr_5 [15] [15] ;
signed char arr_6 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_5 [i_0] [i_1] = 2495634717230603150LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_6 [i_0] = (signed char)-95;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        hash(&seed, arr_6 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
