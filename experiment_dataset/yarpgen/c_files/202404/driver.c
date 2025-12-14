#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)28505;
unsigned long long int var_6 = 10740215040492841231ULL;
int var_7 = -220738867;
short var_9 = (short)-32193;
short var_14 = (short)-26838;
_Bool var_15 = (_Bool)1;
int zero = 0;
int var_16 = -883024235;
unsigned long long int var_17 = 1414041361330285497ULL;
unsigned int var_18 = 125340707U;
unsigned char var_19 = (unsigned char)12;
signed char var_20 = (signed char)111;
unsigned char var_21 = (unsigned char)55;
short arr_3 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (short)-28978;
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
