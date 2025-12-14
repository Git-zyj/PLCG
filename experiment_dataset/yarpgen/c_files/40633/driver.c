#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-26705;
unsigned char var_2 = (unsigned char)35;
unsigned char var_4 = (unsigned char)234;
_Bool var_5 = (_Bool)0;
unsigned char var_7 = (unsigned char)40;
unsigned short var_9 = (unsigned short)55447;
unsigned short var_10 = (unsigned short)23872;
long long int var_12 = 3192374481675263000LL;
signed char var_13 = (signed char)-55;
unsigned short var_14 = (unsigned short)47669;
unsigned int var_15 = 4023464070U;
int zero = 0;
unsigned long long int var_16 = 2309831044087415669ULL;
short var_17 = (short)-16694;
unsigned short var_18 = (unsigned short)11266;
signed char var_19 = (signed char)-67;
unsigned short var_20 = (unsigned short)49120;
_Bool arr_13 [22] [22] [22] [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            for (size_t i_2 = 0; i_2 < 22; ++i_2) 
                for (size_t i_3 = 0; i_3 < 22; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 22; ++i_4) 
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_4] = (_Bool)1;
}

void checksum() {
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
