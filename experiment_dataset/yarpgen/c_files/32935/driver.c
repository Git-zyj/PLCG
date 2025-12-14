#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-8;
short var_1 = (short)-9278;
unsigned short var_2 = (unsigned short)20107;
signed char var_3 = (signed char)40;
_Bool var_4 = (_Bool)0;
long long int var_6 = -8481608999642986098LL;
long long int var_10 = 7756847337866188343LL;
signed char var_14 = (signed char)-52;
int zero = 0;
signed char var_16 = (signed char)36;
long long int var_17 = 5113683612419894921LL;
unsigned long long int var_18 = 10624693751358944742ULL;
unsigned short var_19 = (unsigned short)24205;
short var_20 = (short)-6850;
signed char var_21 = (signed char)-77;
unsigned short arr_1 [16] ;
short arr_2 [16] ;
signed char arr_3 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_1 [i_0] = (unsigned short)24384;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_2 [i_0] = (short)1269;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (signed char)15;
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
