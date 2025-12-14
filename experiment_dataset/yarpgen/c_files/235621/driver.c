#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)37;
signed char var_2 = (signed char)-66;
unsigned short var_3 = (unsigned short)38629;
unsigned int var_5 = 1349132699U;
short var_8 = (short)-27362;
signed char var_9 = (signed char)109;
unsigned char var_12 = (unsigned char)159;
signed char var_14 = (signed char)-75;
int zero = 0;
signed char var_18 = (signed char)-10;
signed char var_19 = (signed char)-65;
long long int var_20 = 1092827887950493028LL;
_Bool var_21 = (_Bool)0;
signed char var_22 = (signed char)29;
unsigned int arr_5 [10] [10] [10] [10] ;
short arr_7 [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_0 % 2 == 0) ? 4060257339U : 2681428179U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_7 [i_0] [i_1] = (short)-10845;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
