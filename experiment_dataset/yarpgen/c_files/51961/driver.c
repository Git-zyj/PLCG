#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 222783129U;
short var_7 = (short)9561;
unsigned short var_11 = (unsigned short)61350;
unsigned long long int var_13 = 550110821462779251ULL;
int var_18 = -1195453311;
int zero = 0;
long long int var_20 = 8458956297519486390LL;
int var_21 = 559091428;
unsigned short var_22 = (unsigned short)24271;
unsigned char arr_2 [12] [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        for (size_t i_1 = 0; i_1 < 12; ++i_1) 
            arr_2 [i_0] [i_1] = (unsigned char)19;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
