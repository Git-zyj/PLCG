#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)42;
_Bool var_2 = (_Bool)1;
unsigned int var_3 = 2584890209U;
unsigned int var_6 = 3820966576U;
unsigned int var_8 = 4290324532U;
signed char var_9 = (signed char)27;
unsigned int var_10 = 2192022470U;
int zero = 0;
signed char var_11 = (signed char)-88;
short var_12 = (short)17161;
unsigned int var_13 = 2707496935U;
unsigned char var_14 = (unsigned char)135;
unsigned char var_15 = (unsigned char)128;
signed char var_16 = (signed char)98;
unsigned char var_17 = (unsigned char)207;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 82666245U;
unsigned long long int var_20 = 10826044129228143483ULL;
signed char var_21 = (signed char)10;
unsigned int arr_9 [10] [10] [10] ;
signed char arr_14 [10] [10] [10] [10] [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                arr_9 [i_0] [i_1] [i_2] = 3614547110U;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            for (size_t i_2 = 0; i_2 < 10; ++i_2) 
                for (size_t i_3 = 0; i_3 < 10; ++i_3) 
                    for (size_t i_4 = 0; i_4 < 10; ++i_4) 
                        for (size_t i_5 = 0; i_5 < 10; ++i_5) 
                            arr_14 [i_0] [i_1] [i_2] [i_3] [i_4] [i_5] = (signed char)-54;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
