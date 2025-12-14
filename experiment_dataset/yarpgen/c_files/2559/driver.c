#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8330;
signed char var_4 = (signed char)79;
short var_6 = (short)28456;
unsigned long long int var_13 = 9693166703177590040ULL;
unsigned char var_15 = (unsigned char)188;
int zero = 0;
unsigned short var_17 = (unsigned short)15915;
unsigned short var_18 = (unsigned short)41882;
short var_19 = (short)19505;
signed char var_20 = (signed char)-1;
signed char arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (signed char)-37 : (signed char)-123;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
