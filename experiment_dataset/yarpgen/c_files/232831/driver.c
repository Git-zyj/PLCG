#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 442541060U;
unsigned long long int var_5 = 4509107524584119629ULL;
unsigned int var_9 = 2234794766U;
unsigned int var_17 = 222845257U;
signed char var_19 = (signed char)13;
int zero = 0;
short var_20 = (short)-28126;
short var_21 = (short)13771;
unsigned short var_22 = (unsigned short)61950;
signed char var_23 = (signed char)-15;
signed char arr_0 [16] ;
long long int arr_1 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (signed char)115;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = 5529166608520326733LL;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
