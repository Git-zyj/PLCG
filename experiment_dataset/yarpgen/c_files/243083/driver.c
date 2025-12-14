#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)59;
unsigned char var_2 = (unsigned char)213;
unsigned char var_7 = (unsigned char)198;
unsigned char var_9 = (unsigned char)214;
unsigned char var_12 = (unsigned char)54;
unsigned char var_13 = (unsigned char)168;
unsigned char var_14 = (unsigned char)87;
int zero = 0;
unsigned char var_17 = (unsigned char)191;
unsigned char var_18 = (unsigned char)34;
unsigned char var_19 = (unsigned char)35;
unsigned char var_20 = (unsigned char)163;
unsigned char var_21 = (unsigned char)155;
unsigned char var_22 = (unsigned char)36;
unsigned char var_23 = (unsigned char)184;
unsigned char arr_4 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_4 [i_0] = (unsigned char)167;
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
