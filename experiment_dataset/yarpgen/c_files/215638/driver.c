#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 998854957373757153ULL;
int var_5 = 2000156788;
long long int var_7 = 8741559756935046271LL;
_Bool var_10 = (_Bool)0;
unsigned int var_11 = 1534392913U;
signed char var_13 = (signed char)23;
signed char var_14 = (signed char)-46;
int zero = 0;
signed char var_15 = (signed char)-94;
int var_16 = -673856801;
short var_17 = (short)-15395;
int var_18 = -1006670194;
unsigned int var_19 = 2604311621U;
int var_20 = -1267154906;
unsigned long long int var_21 = 16450198248315909553ULL;
short arr_1 [10] ;
long long int arr_2 [10] ;
_Bool arr_3 [10] [10] ;
long long int arr_4 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (short)-2948;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_2 [i_0] = 4337121388868333880LL;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_3 [i_0] [i_1] = (i_1 % 2 == 0) ? (_Bool)0 : (_Bool)0;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_4 [i_0] = (i_0 % 2 == 0) ? -4925288510801291105LL : 5633469462099564259LL;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_3 [i_0] [i_1] );
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        hash(&seed, arr_4 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
