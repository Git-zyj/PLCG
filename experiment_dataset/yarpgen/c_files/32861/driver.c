#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6396206935992896039ULL;
unsigned char var_1 = (unsigned char)92;
unsigned long long int var_3 = 4307773229424482886ULL;
short var_7 = (short)1289;
long long int var_8 = -6494423863869303330LL;
signed char var_9 = (signed char)40;
unsigned char var_10 = (unsigned char)20;
_Bool var_11 = (_Bool)0;
int var_13 = -1969152884;
short var_15 = (short)29491;
signed char var_16 = (signed char)69;
unsigned int var_17 = 784007923U;
int zero = 0;
unsigned long long int var_18 = 17754440714259667058ULL;
_Bool var_19 = (_Bool)1;
signed char var_20 = (signed char)-16;
short var_21 = (short)32592;
unsigned int var_22 = 1727002093U;
long long int arr_3 [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_3 [i_0] = -482222100490478455LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        hash(&seed, arr_3 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
