#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7685113650834703152LL;
unsigned long long int var_4 = 10923197270095840985ULL;
short var_11 = (short)10142;
unsigned long long int var_13 = 6286055328394633645ULL;
_Bool var_14 = (_Bool)0;
int zero = 0;
short var_15 = (short)-22289;
unsigned char var_16 = (unsigned char)5;
unsigned short var_17 = (unsigned short)41424;
unsigned long long int var_18 = 15890649966571189325ULL;
_Bool arr_6 [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                arr_6 [i_0] [i_1] [i_2] = (_Bool)1;
}

void checksum() {
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
