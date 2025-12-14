#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)35460;
short var_11 = (short)10934;
unsigned short var_12 = (unsigned short)13152;
short var_13 = (short)-6778;
int zero = 0;
unsigned char var_18 = (unsigned char)111;
short var_19 = (short)-30717;
unsigned int var_20 = 820181949U;
unsigned char var_21 = (unsigned char)250;
long long int arr_1 [14] ;
short arr_2 [14] ;
short arr_3 [14] ;
void init() {
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_1 [i_0] = -7114330490281174069LL;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_2 [i_0] = (short)-8660;
    for (size_t i_0 = 0; i_0 < 14; ++i_0) 
        arr_3 [i_0] = (i_0 % 2 == 0) ? (short)-3970 : (short)20756;
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
