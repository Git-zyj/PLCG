#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3299228441U;
unsigned char var_2 = (unsigned char)167;
_Bool var_3 = (_Bool)0;
int var_4 = -388986235;
signed char var_8 = (signed char)-20;
signed char var_9 = (signed char)88;
int var_10 = 1461365212;
short var_11 = (short)-5432;
unsigned long long int var_12 = 5037791910260657257ULL;
short var_14 = (short)4679;
int zero = 0;
int var_15 = -1293994553;
unsigned short var_16 = (unsigned short)48968;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)239;
unsigned char var_19 = (unsigned char)57;
unsigned int var_20 = 2923984368U;
unsigned char arr_6 [12] [12] [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            for (size_t i_2 = 0; i_2 < 12; ++i_2) 
                for (size_t i_3 = 0; i_3 < 12; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = (unsigned char)5;
}

void checksum() {
    hash(&seed, var_15);
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
