#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)103;
unsigned long long int var_9 = 10794579083853735642ULL;
unsigned short var_11 = (unsigned short)38160;
int zero = 0;
unsigned int var_13 = 2234684493U;
unsigned short var_14 = (unsigned short)11358;
unsigned char var_15 = (unsigned char)208;
unsigned char var_16 = (unsigned char)156;
short var_17 = (short)31007;
short var_18 = (short)14206;
unsigned char arr_0 [24] ;
unsigned long long int arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_0 [i_0] = (unsigned char)55;
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 11783724651938110847ULL;
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
