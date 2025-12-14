#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)232;
unsigned short var_2 = (unsigned short)26576;
unsigned short var_5 = (unsigned short)52031;
unsigned long long int var_7 = 6378973544720594430ULL;
unsigned char var_8 = (unsigned char)45;
signed char var_11 = (signed char)88;
unsigned short var_12 = (unsigned short)49216;
int zero = 0;
signed char var_13 = (signed char)105;
unsigned short var_14 = (unsigned short)25600;
short var_15 = (short)-29082;
unsigned short arr_0 [24] ;
unsigned short arr_4 [24] ;
unsigned char arr_5 [24] [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned short)27950;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_4 [i_0] = (unsigned short)48555;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            for (size_t i_2 = 0; i_2 < 24; ++i_2) 
                arr_5 [i_0] [i_1] [i_2] = (unsigned char)47;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
