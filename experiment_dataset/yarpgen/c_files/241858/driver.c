#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)6118;
short var_5 = (short)18231;
unsigned long long int var_6 = 18281672307977728655ULL;
long long int var_9 = -4760621915330201406LL;
unsigned long long int var_10 = 7222650511871741805ULL;
int zero = 0;
short var_12 = (short)16155;
long long int var_13 = -5678138154280965719LL;
short arr_0 [20] ;
unsigned int arr_1 [20] ;
unsigned long long int arr_2 [20] ;
short arr_3 [20] ;
int arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_0 [i_0] = (short)-717;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_1 [i_0] = 2071676094U;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_2 [i_0] = 12436182138106226919ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)26694;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -2031514747 : 1928345208;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
