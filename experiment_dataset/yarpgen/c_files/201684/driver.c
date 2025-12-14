#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)28;
short var_2 = (short)-11443;
unsigned short var_4 = (unsigned short)31698;
signed char var_6 = (signed char)-48;
long long int var_7 = -8564496082154916729LL;
signed char var_9 = (signed char)-27;
signed char var_10 = (signed char)-8;
int zero = 0;
unsigned short var_11 = (unsigned short)44354;
unsigned char var_12 = (unsigned char)5;
short var_13 = (short)24629;
unsigned short arr_9 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_9 [i_0] = (i_0 % 2 == 0) ? (unsigned short)27654 : (unsigned short)43489;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        hash(&seed, arr_9 [i_0] );
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
