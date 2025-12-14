#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7679581966606243092ULL;
unsigned char var_5 = (unsigned char)177;
unsigned char var_6 = (unsigned char)240;
unsigned short var_7 = (unsigned short)2261;
int var_8 = -241685595;
unsigned char var_16 = (unsigned char)24;
int zero = 0;
int var_17 = 1482996974;
short var_18 = (short)31577;
_Bool var_19 = (_Bool)1;
unsigned long long int var_20 = 12371502297207408445ULL;
unsigned long long int arr_11 [10] [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            arr_11 [i_0] [i_1] = 199654316329051186ULL;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        for (size_t i_1 = 0; i_1 < 10; ++i_1) 
            hash(&seed, arr_11 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
