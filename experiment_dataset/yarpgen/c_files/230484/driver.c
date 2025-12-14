#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
unsigned long long int var_3 = 7110622200299449935ULL;
signed char var_4 = (signed char)16;
unsigned char var_5 = (unsigned char)17;
short var_10 = (short)29065;
signed char var_11 = (signed char)-57;
int zero = 0;
unsigned char var_18 = (unsigned char)252;
unsigned long long int var_19 = 10123995693854883118ULL;
signed char var_20 = (signed char)5;
signed char var_21 = (signed char)41;
unsigned char var_22 = (unsigned char)12;
signed char var_23 = (signed char)-110;
unsigned long long int arr_0 [11] ;
unsigned long long int arr_1 [11] ;
short arr_3 [11] [11] [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 13326692679899176031ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 1266272755059623387ULL : 11828706629516150110ULL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            for (size_t i_2 = 0; i_2 < 11; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_1 % 2 == 0) ? (short)-3888 : (short)-11097;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
