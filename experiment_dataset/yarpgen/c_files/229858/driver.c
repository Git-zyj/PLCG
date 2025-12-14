#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 298791385U;
unsigned int var_6 = 948865988U;
unsigned char var_8 = (unsigned char)182;
signed char var_9 = (signed char)-62;
int zero = 0;
short var_19 = (short)-27544;
unsigned long long int var_20 = 2538517157911886574ULL;
int var_21 = 76864494;
unsigned int var_22 = 2443316831U;
unsigned long long int var_23 = 3423814733132805956ULL;
unsigned int arr_0 [16] ;
unsigned int arr_3 [16] [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = 3468136738U;
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            for (size_t i_2 = 0; i_2 < 16; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = 1663842065U;
}

void checksum() {
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
