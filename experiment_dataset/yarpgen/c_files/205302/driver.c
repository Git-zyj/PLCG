#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)12643;
unsigned char var_3 = (unsigned char)106;
unsigned short var_9 = (unsigned short)57937;
unsigned long long int var_10 = 6493880697223949043ULL;
unsigned int var_11 = 3994644833U;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 13562437792520210054ULL;
int zero = 0;
long long int var_14 = 8102355261808066795LL;
int var_15 = -568325650;
long long int var_16 = 3193897942805826242LL;
unsigned int var_17 = 677961441U;
short arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (i_0 % 2 == 0) ? (short)-21640 : (short)15626;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
