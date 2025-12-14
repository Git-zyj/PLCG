#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -404581974;
long long int var_4 = -5428476519124462668LL;
int var_6 = 646124842;
unsigned long long int var_12 = 1026147432655907269ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)41703;
int var_14 = -2114687652;
unsigned short var_15 = (unsigned short)8048;
unsigned char arr_3 [16] [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        for (size_t i_1 = 0; i_1 < 16; ++i_1) 
            arr_3 [i_0] [i_1] = (i_0 % 2 == 0) ? (unsigned char)11 : (unsigned char)58;
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
