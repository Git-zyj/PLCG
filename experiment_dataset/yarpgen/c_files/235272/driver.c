#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)245;
int var_2 = 1247880424;
long long int var_3 = 7980380746534780685LL;
unsigned int var_4 = 265254729U;
signed char var_5 = (signed char)90;
unsigned short var_6 = (unsigned short)41334;
unsigned char var_7 = (unsigned char)27;
unsigned short var_8 = (unsigned short)51441;
long long int var_9 = 7962689195578237273LL;
int zero = 0;
int var_13 = 105254833;
long long int var_14 = 2937959480168031668LL;
unsigned char var_15 = (unsigned char)110;
unsigned int var_16 = 974068840U;
long long int var_17 = 3348093983951652163LL;
unsigned long long int arr_1 [12] ;
long long int arr_4 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 10065225638624147003ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = -1049892008051437262LL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
