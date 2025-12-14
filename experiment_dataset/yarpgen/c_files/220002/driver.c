#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 521895569;
int var_2 = -1453342151;
signed char var_3 = (signed char)-62;
unsigned char var_4 = (unsigned char)55;
_Bool var_7 = (_Bool)0;
int var_8 = 1567951784;
int var_9 = 810700267;
int zero = 0;
signed char var_10 = (signed char)-30;
long long int var_11 = -1814824799951182293LL;
int var_12 = -988123660;
unsigned int var_13 = 3883324878U;
long long int arr_1 [15] [15] ;
unsigned int arr_4 [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = 7869753916191657681LL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_4 [i_0] [i_1] = 1525885069U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
