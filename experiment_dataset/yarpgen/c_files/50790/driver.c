#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-83;
unsigned char var_2 = (unsigned char)58;
unsigned int var_3 = 1191765506U;
unsigned short var_4 = (unsigned short)41635;
unsigned short var_5 = (unsigned short)954;
int var_6 = -1778760926;
signed char var_9 = (signed char)-111;
int zero = 0;
unsigned short var_10 = (unsigned short)17636;
signed char var_11 = (signed char)-41;
int var_12 = -987443777;
unsigned short var_13 = (unsigned short)36724;
signed char var_14 = (signed char)33;
unsigned long long int var_15 = 14398493000586264086ULL;
short arr_0 [18] ;
short arr_3 [18] [18] ;
unsigned short arr_4 [18] [18] ;
unsigned long long int arr_5 [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_0 [i_0] = (short)-17775;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-32464;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_4 [i_0] [i_1] = (unsigned short)4242;
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        arr_5 [i_0] = 1125206022067223468ULL;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        hash(&seed, arr_5 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
