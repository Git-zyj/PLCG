#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)111;
int var_1 = -1648693724;
unsigned char var_2 = (unsigned char)134;
unsigned int var_3 = 9477397U;
signed char var_4 = (signed char)31;
unsigned int var_6 = 499891148U;
short var_7 = (short)5604;
unsigned int var_10 = 1209613238U;
short var_11 = (short)-27817;
int zero = 0;
signed char var_13 = (signed char)-58;
int var_14 = 168660571;
short var_15 = (short)32556;
unsigned long long int arr_2 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_2 [i_0] [i_1] = 11733763221686363520ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            hash(&seed, arr_2 [i_0] [i_1] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
