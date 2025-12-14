#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 785246411797712221LL;
long long int var_1 = -5465015381969107560LL;
short var_3 = (short)4998;
long long int var_5 = 8745559759479828947LL;
unsigned short var_6 = (unsigned short)1131;
unsigned short var_7 = (unsigned short)15589;
unsigned short var_9 = (unsigned short)10790;
signed char var_10 = (signed char)-114;
unsigned short var_12 = (unsigned short)49731;
unsigned int var_13 = 4115070082U;
signed char var_14 = (signed char)-73;
signed char var_15 = (signed char)21;
unsigned long long int var_16 = 9852121355881933154ULL;
int zero = 0;
long long int var_17 = 4742123063544649211LL;
signed char var_18 = (signed char)-13;
signed char var_19 = (signed char)-7;
signed char var_20 = (signed char)-2;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)210;
long long int arr_4 [21] [21] ;
unsigned short arr_5 [21] ;
void init() {
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            arr_4 [i_0] [i_1] = 6312188368694957029LL;
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        arr_5 [i_0] = (unsigned short)2196;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        for (size_t i_1 = 0; i_1 < 21; ++i_1) 
            hash(&seed, arr_4 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 21; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
