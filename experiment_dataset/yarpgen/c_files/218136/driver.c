#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2540643309U;
signed char var_5 = (signed char)-99;
short var_6 = (short)-429;
unsigned int var_12 = 247788761U;
int var_15 = -2147013176;
signed char var_17 = (signed char)109;
int zero = 0;
int var_20 = -396938145;
int var_21 = -883601357;
unsigned long long int var_22 = 11976647403313427358ULL;
int var_23 = -67864071;
int arr_3 [25] [25] [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        for (size_t i_1 = 0; i_1 < 25; ++i_1) 
            for (size_t i_2 = 0; i_2 < 25; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_2 % 2 == 0) ? 461347581 : 161743721;
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
