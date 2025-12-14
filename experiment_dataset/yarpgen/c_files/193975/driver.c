#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -5422273261954875481LL;
int var_7 = -1372653321;
unsigned int var_8 = 1907173205U;
unsigned long long int var_10 = 4595781631998094418ULL;
_Bool var_11 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = 223733435;
unsigned int var_22 = 4013845481U;
unsigned long long int arr_0 [10] ;
unsigned int arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = 506493111422858360ULL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = 445475247U;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
