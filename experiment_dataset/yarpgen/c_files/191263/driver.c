#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)79;
unsigned short var_4 = (unsigned short)25092;
unsigned short var_5 = (unsigned short)38062;
signed char var_6 = (signed char)57;
unsigned long long int var_7 = 4033817872224634868ULL;
short var_8 = (short)25180;
signed char var_9 = (signed char)84;
int var_10 = -1427453948;
int zero = 0;
short var_12 = (short)-26856;
unsigned short var_13 = (unsigned short)57345;
unsigned int arr_5 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_5 [i_0] [i_1] = 1279695307U;
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_5 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
