#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -6744312771796023823LL;
unsigned char var_2 = (unsigned char)69;
long long int var_10 = -9203221323743978684LL;
unsigned char var_11 = (unsigned char)28;
int zero = 0;
unsigned char var_12 = (unsigned char)65;
long long int var_13 = -1383217635914068168LL;
signed char var_14 = (signed char)96;
long long int var_15 = 2139701981754296286LL;
long long int arr_2 [11] [11] ;
unsigned short arr_3 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        for (size_t i_1 = 0; i_1 < 11; ++i_1) 
            arr_2 [i_0] [i_1] = 8102428015971645230LL;
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_3 [i_0] = (unsigned short)52949;
}

void checksum() {
    hash(&seed, var_12);
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
