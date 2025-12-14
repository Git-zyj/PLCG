#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4158456054U;
_Bool var_6 = (_Bool)0;
_Bool var_8 = (_Bool)0;
long long int var_9 = -6570275323806935555LL;
unsigned short var_10 = (unsigned short)56940;
long long int var_12 = 3864932321678126293LL;
unsigned char var_13 = (unsigned char)171;
int zero = 0;
signed char var_15 = (signed char)16;
signed char var_16 = (signed char)-11;
unsigned long long int var_17 = 3447803598108103868ULL;
unsigned int var_18 = 4177231665U;
signed char var_19 = (signed char)-122;
signed char arr_2 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (signed char)-116;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
