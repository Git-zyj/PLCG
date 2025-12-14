#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)47346;
unsigned long long int var_3 = 8529573409469530944ULL;
unsigned int var_5 = 1820662518U;
unsigned short var_7 = (unsigned short)38859;
unsigned short var_8 = (unsigned short)62967;
signed char var_9 = (signed char)-16;
int zero = 0;
unsigned short var_12 = (unsigned short)31399;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 3301604890U;
unsigned int var_15 = 524682160U;
unsigned int var_16 = 2897171297U;
unsigned short var_17 = (unsigned short)11806;
signed char arr_7 [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                arr_7 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (signed char)51 : (signed char)-26;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
