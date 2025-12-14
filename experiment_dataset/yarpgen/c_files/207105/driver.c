#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_12 = (short)-2702;
unsigned int var_13 = 2460449050U;
signed char var_14 = (signed char)105;
int zero = 0;
short var_15 = (short)-17062;
unsigned long long int var_16 = 17822447524661279614ULL;
unsigned char var_17 = (unsigned char)239;
short var_18 = (short)32679;
unsigned long long int var_19 = 4182653119221635696ULL;
short var_20 = (short)11152;
short arr_2 [17] [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        for (size_t i_1 = 0; i_1 < 17; ++i_1) 
            arr_2 [i_0] [i_1] = (short)-19094;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
