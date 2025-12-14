#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 18411069U;
unsigned int var_3 = 1115206571U;
_Bool var_4 = (_Bool)0;
unsigned long long int var_5 = 10377158575027441980ULL;
signed char var_6 = (signed char)11;
unsigned long long int var_7 = 6173374910980717621ULL;
unsigned int var_8 = 1952628864U;
unsigned short var_9 = (unsigned short)15123;
int zero = 0;
unsigned char var_11 = (unsigned char)40;
signed char var_12 = (signed char)-69;
long long int var_13 = 8460131407200955447LL;
short var_14 = (short)-749;
long long int var_15 = 1926697875533041959LL;
unsigned char arr_0 [20] [20] ;
unsigned short arr_4 [20] [20] [20] ;
signed char arr_5 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_0 [i_0] [i_1] = (unsigned char)149;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            for (size_t i_2 = 0; i_2 < 20; ++i_2) 
                arr_4 [i_0] [i_1] [i_2] = (unsigned short)59311;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_5 [i_0] = (i_0 % 2 == 0) ? (signed char)54 : (signed char)80;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
