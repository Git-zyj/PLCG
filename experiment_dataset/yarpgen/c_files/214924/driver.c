#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -2121943004398554150LL;
long long int var_4 = -2719718846700155938LL;
int var_6 = -49856653;
long long int var_7 = -4144665140611167183LL;
unsigned short var_10 = (unsigned short)60973;
int zero = 0;
unsigned long long int var_11 = 9974301615799680759ULL;
unsigned long long int var_12 = 5342649383212347289ULL;
unsigned int arr_0 [12] ;
int arr_2 [12] ;
unsigned long long int arr_4 [12] [12] ;
short arr_5 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = 2044589437U;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_2 [i_0] = -1102270019;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_4 [i_0] [i_1] = 7468221603492028412ULL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_5 [i_0] = (short)-13972;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
