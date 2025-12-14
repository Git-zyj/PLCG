#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-29443;
unsigned long long int var_3 = 7525723436837984275ULL;
long long int var_8 = -1151922835276851445LL;
short var_9 = (short)-16369;
unsigned char var_12 = (unsigned char)56;
int var_14 = 405130677;
unsigned int var_15 = 3108332051U;
unsigned char var_16 = (unsigned char)90;
int zero = 0;
signed char var_17 = (signed char)-70;
unsigned char var_18 = (unsigned char)31;
signed char var_19 = (signed char)-79;
unsigned long long int arr_3 [20] ;
signed char arr_7 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? 10910681300047675686ULL : 6779594549016477818ULL;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (signed char)44 : (signed char)-59;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
