#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-26;
unsigned char var_3 = (unsigned char)32;
int var_5 = 1405901188;
unsigned long long int var_8 = 2290274377427359907ULL;
signed char var_15 = (signed char)57;
signed char var_16 = (signed char)-86;
int zero = 0;
unsigned short var_20 = (unsigned short)49620;
unsigned long long int var_21 = 16364680366283338447ULL;
short var_22 = (short)28746;
unsigned long long int arr_0 [25] ;
int arr_1 [25] ;
int arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_0 [i_0] = 6648485769418823794ULL;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_1 [i_0] = -1793411480;
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = -610261788;
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
