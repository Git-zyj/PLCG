#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8608150650708001019ULL;
int var_4 = -1983752753;
long long int var_5 = -6279212093516803540LL;
int var_6 = 1097552753;
unsigned int var_13 = 4026726551U;
signed char var_14 = (signed char)15;
signed char var_15 = (signed char)(-127 - 1);
int zero = 0;
unsigned long long int var_18 = 16802437936102834228ULL;
unsigned int var_19 = 3852376139U;
signed char var_20 = (signed char)26;
signed char var_21 = (signed char)-11;
int var_22 = 2087850644;
int arr_4 [24] [24] ;
unsigned long long int arr_5 [24] [24] [24] [24] ;
int arr_8 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (i_0 % 2 == 0) ? -841290932 : -2115462103;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                for (size_t i_3 = 0; i_3 < 24; ++i_3) 
                    arr_5 [i_0] [i_1] [i_2] [i_3] = (i_3 % 2 == 0) ? 8295846808634882152ULL : 7506382887674864864ULL;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_8 [i_0] = (i_0 % 2 == 0) ? -1281751500 : 43528283;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        hash(&seed, arr_8 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
