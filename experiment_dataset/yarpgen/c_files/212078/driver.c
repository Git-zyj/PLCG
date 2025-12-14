#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1616744120;
short var_3 = (short)31876;
unsigned long long int var_4 = 9544647393043501888ULL;
unsigned short var_5 = (unsigned short)40167;
unsigned short var_6 = (unsigned short)34232;
long long int var_8 = -1236949656880289993LL;
unsigned long long int var_9 = 7721223031520027557ULL;
int zero = 0;
long long int var_10 = 7421355070419381273LL;
signed char var_11 = (signed char)-116;
unsigned short var_12 = (unsigned short)865;
signed char var_13 = (signed char)54;
int arr_1 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = -720703657;
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
