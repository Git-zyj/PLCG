#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-96;
unsigned short var_2 = (unsigned short)47093;
unsigned short var_3 = (unsigned short)18446;
unsigned int var_10 = 3902233255U;
unsigned long long int var_12 = 4990158880770238906ULL;
int zero = 0;
int var_18 = -2025771390;
unsigned short var_19 = (unsigned short)46766;
unsigned short var_20 = (unsigned short)11819;
int var_21 = 179119400;
int var_22 = 277072860;
unsigned char arr_0 [12] ;
long long int arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (unsigned char)172;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = 2771131325382112516LL;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
