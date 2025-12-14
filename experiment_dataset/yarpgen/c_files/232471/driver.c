#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)21805;
unsigned long long int var_5 = 12012188271225245976ULL;
short var_7 = (short)-25779;
signed char var_9 = (signed char)-4;
unsigned long long int var_12 = 9245091504000717986ULL;
int var_14 = -867986755;
unsigned int var_16 = 4158712306U;
int var_17 = -1821186592;
int zero = 0;
_Bool var_18 = (_Bool)1;
signed char var_19 = (signed char)-32;
_Bool var_20 = (_Bool)1;
unsigned char var_21 = (unsigned char)254;
signed char var_22 = (signed char)111;
short var_23 = (short)-12366;
unsigned char var_24 = (unsigned char)195;
signed char var_25 = (signed char)55;
unsigned long long int arr_0 [24] ;
short arr_2 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = 1832525799507359229ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_2 [i_0] = (short)-2424;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
