#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -435333281;
long long int var_7 = 1374854565727170510LL;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-11513;
unsigned long long int var_13 = 5791487705605056319ULL;
int zero = 0;
unsigned int var_14 = 3688891336U;
unsigned long long int var_15 = 3749681926612278025ULL;
int var_16 = -1550718432;
unsigned char var_17 = (unsigned char)57;
signed char var_18 = (signed char)-114;
long long int arr_0 [23] [23] ;
void init() {
    for (size_t i_0 = 0; i_0 < 23; ++i_0) 
        for (size_t i_1 = 0; i_1 < 23; ++i_1) 
            arr_0 [i_0] [i_1] = (i_0 % 2 == 0) ? -5637796127343615468LL : -2757306650254865533LL;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
