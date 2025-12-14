#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-30197;
unsigned char var_3 = (unsigned char)151;
unsigned short var_6 = (unsigned short)58240;
_Bool var_8 = (_Bool)1;
unsigned long long int var_11 = 10982505103910983778ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)23;
signed char var_15 = (signed char)79;
signed char var_16 = (signed char)56;
signed char var_17 = (signed char)112;
short var_18 = (short)-27094;
unsigned short arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = (unsigned short)10863;
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
