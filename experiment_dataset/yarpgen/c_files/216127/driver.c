#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2922264258U;
_Bool var_2 = (_Bool)1;
unsigned char var_5 = (unsigned char)95;
unsigned long long int var_7 = 15432414573630580784ULL;
short var_9 = (short)13035;
_Bool var_10 = (_Bool)0;
unsigned long long int var_13 = 15605293551330958363ULL;
int zero = 0;
short var_15 = (short)3465;
long long int var_16 = 3395336387203768080LL;
unsigned short var_17 = (unsigned short)30860;
long long int var_18 = -3699185234441163376LL;
unsigned char var_19 = (unsigned char)199;
long long int var_20 = 7926859030674113483LL;
int var_21 = 689749855;
short var_22 = (short)14802;
int var_23 = 749041584;
signed char var_24 = (signed char)56;
short arr_10 [10] [10] [10] ;
unsigned short arr_14 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_10 [i_0] [i_1] [i_2] = (short)15029;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_14 [i_0] [i_1] = (unsigned short)1308;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
