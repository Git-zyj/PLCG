#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1782680184005218497LL;
unsigned short var_1 = (unsigned short)13380;
int var_3 = -673668340;
short var_4 = (short)21794;
int var_5 = 1374467748;
unsigned int var_8 = 2214759671U;
signed char var_9 = (signed char)127;
unsigned char var_10 = (unsigned char)246;
int zero = 0;
signed char var_13 = (signed char)-127;
unsigned int var_14 = 2167670020U;
short var_15 = (short)-15453;
signed char var_16 = (signed char)117;
int var_17 = -898723911;
short var_18 = (short)7089;
short var_19 = (short)21328;
unsigned int arr_0 [18] ;
int arr_3 [18] [18] ;
unsigned int arr_5 [18] [18] [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3281474936U : 1835327578U;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? 52712419 : 1637263132;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            for (size_t i_2 = 0; i_2 < 18; ++i_2) 
                for (size_t i_3 = 0; i_3 < 18; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = 3603264775U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
