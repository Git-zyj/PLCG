#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)33089;
long long int var_7 = 6354237796661683930LL;
long long int var_9 = -3216640165150885967LL;
int zero = 0;
unsigned long long int var_12 = 4982604858687100376ULL;
unsigned long long int var_13 = 11357123431043606278ULL;
signed char var_14 = (signed char)-114;
short var_15 = (short)-30883;
unsigned long long int var_16 = 205551044612628381ULL;
short arr_1 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_1 [i_0] = (short)10262;
}

void checksum() {
    hash(&seed, var_12);
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
