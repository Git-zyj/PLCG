#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 344250752;
unsigned char var_6 = (unsigned char)126;
unsigned int var_7 = 1948300939U;
signed char var_10 = (signed char)17;
short var_12 = (short)-27896;
int zero = 0;
unsigned char var_13 = (unsigned char)21;
long long int var_14 = 4692200098882340427LL;
int var_15 = 774500257;
short arr_3 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_3 [i_0] [i_1] = (short)-26648;
}

void checksum() {
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
