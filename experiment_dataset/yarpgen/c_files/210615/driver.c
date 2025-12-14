#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_10 = 2991540888U;
int zero = 0;
int var_11 = -301201118;
unsigned long long int var_12 = 5577837536361153025ULL;
short var_13 = (short)26162;
short var_14 = (short)-17221;
unsigned long long int var_15 = 16013740410914901781ULL;
unsigned long long int arr_0 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_0 [i_0] = 1183297632728703820ULL;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
