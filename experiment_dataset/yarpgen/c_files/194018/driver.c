#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)15699;
short var_1 = (short)-27193;
unsigned short var_3 = (unsigned short)4058;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)1;
int var_7 = -1661097896;
unsigned long long int var_8 = 14737653060522392451ULL;
unsigned long long int var_10 = 15810531526313013983ULL;
short var_11 = (short)22217;
int zero = 0;
signed char var_13 = (signed char)116;
unsigned int var_14 = 2286003939U;
unsigned int var_15 = 977989087U;
int var_16 = -379390910;
unsigned int var_17 = 3379081006U;
signed char var_18 = (signed char)79;
signed char arr_0 [22] [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        for (size_t i_1 = 0; i_1 < 22; ++i_1) 
            arr_0 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-64 : (signed char)21;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
