#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)26086;
int var_1 = -1174641605;
unsigned short var_13 = (unsigned short)59048;
unsigned char var_14 = (unsigned char)32;
int zero = 0;
unsigned int var_20 = 4112264981U;
unsigned short var_21 = (unsigned short)32501;
unsigned long long int var_22 = 8055294684318441687ULL;
unsigned char var_23 = (unsigned char)195;
signed char arr_2 [20] [20] ;
unsigned char arr_4 [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_2 [i_0] [i_1] = (signed char)117;
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        arr_4 [i_0] = (unsigned char)135;
}

void checksum() {
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
