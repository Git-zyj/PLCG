#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-100;
short var_1 = (short)15656;
unsigned int var_3 = 2607866603U;
signed char var_5 = (signed char)62;
unsigned char var_6 = (unsigned char)40;
signed char var_10 = (signed char)121;
int zero = 0;
unsigned long long int var_13 = 14238819100953991023ULL;
unsigned short var_14 = (unsigned short)9650;
unsigned long long int var_15 = 1527168686061646008ULL;
unsigned long long int var_16 = 16194853371388610954ULL;
long long int var_17 = -8938094646979982675LL;
unsigned long long int var_18 = 13872014227276221812ULL;
unsigned int arr_8 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_8 [i_0] [i_1] = 3955346590U;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            hash(&seed, arr_8 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
