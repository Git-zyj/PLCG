#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_7 = (unsigned char)22;
unsigned char var_8 = (unsigned char)252;
unsigned char var_9 = (unsigned char)40;
unsigned long long int var_14 = 15269335391308453742ULL;
int zero = 0;
unsigned char var_18 = (unsigned char)65;
unsigned long long int var_19 = 539475565882548619ULL;
unsigned int var_20 = 119247610U;
unsigned long long int var_21 = 5636254655529022891ULL;
unsigned char var_22 = (unsigned char)7;
unsigned char var_23 = (unsigned char)94;
unsigned short arr_3 [15] [15] [15] ;
void init() {
    for (size_t i_0 = 0; i_0 < 15; ++i_0) 
        for (size_t i_1 = 0; i_1 < 15; ++i_1) 
            for (size_t i_2 = 0; i_2 < 15; ++i_2) 
                arr_3 [i_0] [i_1] [i_2] = (i_0 % 2 == 0) ? (unsigned short)25208 : (unsigned short)28990;
}

void checksum() {
    hash(&seed, var_18);
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
