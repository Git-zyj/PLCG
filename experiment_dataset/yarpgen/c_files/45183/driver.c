#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)39;
signed char var_6 = (signed char)-12;
unsigned char var_7 = (unsigned char)247;
_Bool var_8 = (_Bool)1;
int zero = 0;
unsigned int var_15 = 1098344362U;
unsigned short var_16 = (unsigned short)49642;
unsigned short var_17 = (unsigned short)61503;
unsigned short var_18 = (unsigned short)10385;
short var_19 = (short)-18125;
_Bool var_20 = (_Bool)1;
long long int arr_0 [17] ;
void init() {
    for (size_t i_0 = 0; i_0 < 17; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 7671970646611790394LL : 3038389677201950160LL;
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
