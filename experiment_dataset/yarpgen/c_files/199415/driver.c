#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1050236105714794069LL;
unsigned char var_2 = (unsigned char)74;
unsigned short var_4 = (unsigned short)36157;
unsigned int var_5 = 2740835104U;
signed char var_7 = (signed char)-121;
unsigned int var_9 = 1920859268U;
int zero = 0;
unsigned short var_10 = (unsigned short)60162;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)10058;
unsigned short var_13 = (unsigned short)28453;
signed char var_14 = (signed char)99;
short var_15 = (short)15027;
unsigned short arr_6 [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (unsigned short)45816;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
