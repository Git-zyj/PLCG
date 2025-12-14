#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47854;
short var_1 = (short)-16065;
int var_5 = -1134241352;
signed char var_6 = (signed char)35;
unsigned short var_10 = (unsigned short)32870;
int zero = 0;
unsigned short var_11 = (unsigned short)1426;
unsigned long long int var_12 = 16146891766829477778ULL;
short var_13 = (short)-12299;
signed char var_14 = (signed char)5;
long long int var_15 = -3062725008290712673LL;
int var_16 = 468072701;
signed char var_17 = (signed char)-117;
unsigned int var_18 = 3916518459U;
unsigned int arr_0 [19] ;
unsigned long long int arr_1 [19] ;
unsigned int arr_6 [19] [19] [19] [19] ;
unsigned short arr_9 [19] [19] [19] [19] ;
void init() {
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_0 [i_0] = (i_0 % 2 == 0) ? 3219985487U : 3377743277U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        arr_1 [i_0] = 16237243223501169739ULL;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_6 [i_0] [i_1] [i_2] [i_3] = 4161889296U;
    for (size_t i_0 = 0; i_0 < 19; ++i_0) 
        for (size_t i_1 = 0; i_1 < 19; ++i_1) 
            for (size_t i_2 = 0; i_2 < 19; ++i_2) 
                for (size_t i_3 = 0; i_3 < 19; ++i_3) 
                    arr_9 [i_0] [i_1] [i_2] [i_3] = (unsigned short)54886;
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
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
