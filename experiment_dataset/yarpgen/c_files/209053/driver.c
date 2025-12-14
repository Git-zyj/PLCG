#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)16020;
unsigned int var_6 = 2785736972U;
unsigned long long int var_11 = 12493375758948246946ULL;
unsigned char var_13 = (unsigned char)245;
unsigned long long int var_17 = 4452714522144749023ULL;
unsigned int var_19 = 4266589791U;
int zero = 0;
int var_20 = -1163852154;
unsigned char var_21 = (unsigned char)126;
int var_22 = -1459014745;
_Bool var_23 = (_Bool)1;
short var_24 = (short)12239;
unsigned short var_25 = (unsigned short)4265;
unsigned char arr_0 [14] ;
_Bool arr_2 [14] [14] [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? (unsigned char)198 : (unsigned char)43;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        for (size_t i_1 = 0; i_1 < 14; ++i_1) 
            for (size_t i_2 = 0; i_2 < 14; ++i_2) 
                arr_2 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (_Bool)1 : (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
