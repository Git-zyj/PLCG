#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 11809693747536672631ULL;
unsigned int var_4 = 2281309640U;
unsigned long long int var_8 = 9038727583322108685ULL;
unsigned long long int var_9 = 9803912502071323983ULL;
int zero = 0;
unsigned int var_10 = 1825753678U;
int var_11 = 498545423;
int var_12 = 1465897527;
unsigned long long int var_13 = 6978747281478110451ULL;
unsigned int var_14 = 144842881U;
unsigned int arr_0 [17] [17] ;
unsigned int arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_0 [i_0] [i_1] = 3720343979U;
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = 3862538709U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
