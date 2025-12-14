#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3110592480U;
short var_6 = (short)-13328;
short var_12 = (short)-23006;
int var_16 = 920783116;
int zero = 0;
int var_18 = -1585276654;
signed char var_19 = (signed char)111;
unsigned long long int var_20 = 11862136455543274870ULL;
int var_21 = -1849617672;
unsigned char arr_0 [10] ;
signed char arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_0 [i_0] = (unsigned char)25;
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)-77;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
