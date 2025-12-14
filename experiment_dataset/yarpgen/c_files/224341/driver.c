#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2015785873U;
unsigned short var_5 = (unsigned short)15337;
unsigned short var_7 = (unsigned short)19229;
unsigned short var_9 = (unsigned short)41318;
unsigned short var_15 = (unsigned short)61194;
int zero = 0;
unsigned short var_20 = (unsigned short)4967;
unsigned int var_21 = 861044529U;
unsigned int var_22 = 2071640869U;
unsigned char var_23 = (unsigned char)123;
unsigned int arr_0 [11] ;
unsigned int arr_1 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_0 [i_0] = 368972789U;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? 622411239U : 590987948U;
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
