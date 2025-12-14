#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4004705700U;
signed char var_3 = (signed char)-16;
unsigned long long int var_5 = 3270183382874680930ULL;
unsigned long long int var_10 = 18372108015793864654ULL;
_Bool var_12 = (_Bool)1;
signed char var_15 = (signed char)78;
_Bool var_16 = (_Bool)1;
unsigned char var_18 = (unsigned char)82;
unsigned int var_19 = 4268611091U;
int zero = 0;
unsigned short var_20 = (unsigned short)3354;
unsigned long long int var_21 = 16326963234432442774ULL;
unsigned int var_22 = 4034975170U;
unsigned int var_23 = 3596425925U;
unsigned long long int var_24 = 14957108332539906629ULL;
unsigned int var_25 = 310513181U;
long long int var_26 = 7700693156927478692LL;
unsigned char var_27 = (unsigned char)111;
unsigned short var_28 = (unsigned short)44703;
unsigned long long int arr_0 [15] ;
unsigned char arr_1 [15] [15] ;
unsigned int arr_2 [15] [15] ;
short arr_3 [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_0 [i_0] = 12905552245581848138ULL;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_1 [i_0] [i_1] = (unsigned char)254;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            arr_2 [i_0] [i_1] = 3760422993U;
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        arr_3 [i_0] = (short)-15589;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
    hash(&seed, var_26);
    hash(&seed, var_27);
    hash(&seed, var_28);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
