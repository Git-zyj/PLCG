#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1478900943;
unsigned short var_12 = (unsigned short)28681;
short var_13 = (short)-13571;
int zero = 0;
unsigned long long int var_17 = 13957007188863149164ULL;
_Bool var_18 = (_Bool)0;
unsigned short var_19 = (unsigned short)17160;
short var_20 = (short)-24235;
unsigned char arr_2 [25] ;
void init() {
    for (size_t i_0 = 0; i_0 < 25; ++i_0) 
        arr_2 [i_0] = (unsigned char)1;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
