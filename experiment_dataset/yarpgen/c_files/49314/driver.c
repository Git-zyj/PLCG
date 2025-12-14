#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)37;
short var_3 = (short)2124;
short var_4 = (short)28002;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)0;
int var_8 = -674479835;
unsigned int var_9 = 1106314303U;
int zero = 0;
signed char var_10 = (signed char)118;
unsigned char var_11 = (unsigned char)196;
unsigned char var_12 = (unsigned char)125;
_Bool var_13 = (_Bool)1;
unsigned int var_14 = 1218852602U;
unsigned int arr_11 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_11 [i_0] [i_1] = 4028276460U;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
