#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -3031244228663673197LL;
long long int var_4 = -5113931422707042993LL;
int var_9 = 1030263938;
int var_12 = -2079003284;
int zero = 0;
unsigned short var_13 = (unsigned short)5612;
unsigned short var_14 = (unsigned short)38267;
long long int var_15 = 8195797651559544423LL;
unsigned long long int var_16 = 14952402697973583001ULL;
signed char arr_0 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (signed char)85;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
