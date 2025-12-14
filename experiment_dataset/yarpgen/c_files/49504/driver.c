#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 122666518U;
signed char var_4 = (signed char)99;
unsigned long long int var_5 = 500771949485320739ULL;
unsigned char var_9 = (unsigned char)198;
int var_10 = -1310560698;
unsigned int var_11 = 3466126195U;
int zero = 0;
unsigned char var_18 = (unsigned char)15;
short var_19 = (short)12436;
signed char var_20 = (signed char)19;
int var_21 = -1985924542;
unsigned long long int var_22 = 17765733559192150406ULL;
short var_23 = (short)29756;
signed char arr_1 [21] ;
signed char arr_4 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_1 [i_0] = (signed char)-17;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_4 [i_0] = (signed char)-37;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
