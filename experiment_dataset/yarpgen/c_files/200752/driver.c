#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -2000242460;
unsigned int var_5 = 3179016982U;
unsigned int var_6 = 3482735213U;
unsigned int var_7 = 203587289U;
_Bool var_9 = (_Bool)1;
signed char var_11 = (signed char)-30;
unsigned int var_14 = 3085550441U;
signed char var_15 = (signed char)110;
long long int var_16 = 4794197313526393371LL;
int zero = 0;
signed char var_17 = (signed char)-47;
unsigned short var_18 = (unsigned short)23748;
signed char var_19 = (signed char)-43;
long long int var_20 = -8253012865907508066LL;
int var_21 = -630700582;
long long int var_22 = -6993528768991592759LL;
unsigned short var_23 = (unsigned short)39710;
_Bool arr_5 [13] [13] [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        for (size_t i_1 = 0; i_1 < 13; ++i_1) 
            for (size_t i_2 = 0; i_2 < 13; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
