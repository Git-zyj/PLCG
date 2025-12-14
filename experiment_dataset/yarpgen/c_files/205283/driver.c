#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5273055283922068252ULL;
unsigned int var_2 = 2487056670U;
signed char var_8 = (signed char)42;
signed char var_10 = (signed char)99;
short var_12 = (short)15191;
short var_14 = (short)28878;
unsigned char var_16 = (unsigned char)79;
int zero = 0;
short var_17 = (short)-3562;
unsigned int var_18 = 4176178230U;
signed char var_19 = (signed char)52;
unsigned int var_20 = 4014044907U;
unsigned short var_21 = (unsigned short)42777;
unsigned short arr_2 [22] ;
signed char arr_5 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_2 [i_0] = (unsigned short)11656;
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_5 [i_0] = (signed char)-46;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
