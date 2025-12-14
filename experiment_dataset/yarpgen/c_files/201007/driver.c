#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)209;
unsigned int var_3 = 1394921697U;
unsigned char var_6 = (unsigned char)52;
unsigned short var_8 = (unsigned short)46838;
int zero = 0;
unsigned int var_10 = 1489556073U;
unsigned char var_11 = (unsigned char)88;
unsigned char var_12 = (unsigned char)98;
long long int arr_0 [12] ;
unsigned short arr_1 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = -5986619212465369709LL;
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_1 [i_0] = (unsigned short)41445;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
