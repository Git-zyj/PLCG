#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)801;
unsigned int var_4 = 1236424523U;
unsigned short var_12 = (unsigned short)59071;
long long int var_13 = -6607353000955922592LL;
int zero = 0;
unsigned char var_14 = (unsigned char)195;
unsigned char var_15 = (unsigned char)185;
long long int var_16 = 3504599708705481301LL;
unsigned short arr_7 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_7 [i_0] = (i_0 % 2 == 0) ? (unsigned short)14430 : (unsigned short)16866;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        hash(&seed, arr_7 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
