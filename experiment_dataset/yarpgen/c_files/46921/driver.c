#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4104026258U;
unsigned char var_1 = (unsigned char)76;
signed char var_2 = (signed char)38;
signed char var_4 = (signed char)91;
long long int var_7 = 3525849547094200337LL;
unsigned long long int var_8 = 17022244808273544528ULL;
short var_9 = (short)11820;
unsigned long long int var_12 = 8547319369258941248ULL;
int zero = 0;
_Bool var_13 = (_Bool)0;
unsigned int var_14 = 2105518072U;
unsigned long long int var_15 = 11924553371675322677ULL;
short var_16 = (short)19489;
unsigned char var_17 = (unsigned char)43;
signed char var_18 = (signed char)60;
_Bool arr_2 [14] [14] ;
unsigned short arr_6 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            arr_2 [i_0] [i_1] = (_Bool)1;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_6 [i_0] = (unsigned short)19805;
}

void checksum() {
    hash(&seed, var_13);
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
