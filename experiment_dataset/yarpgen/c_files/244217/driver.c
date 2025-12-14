#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1930649412;
int var_1 = 1002779013;
signed char var_2 = (signed char)-90;
unsigned char var_3 = (unsigned char)146;
int var_5 = -1660753006;
unsigned char var_7 = (unsigned char)136;
int zero = 0;
unsigned long long int var_10 = 2330601071049459586ULL;
unsigned char var_11 = (unsigned char)101;
int var_12 = 380750656;
int var_13 = 387687917;
int var_14 = 562046330;
unsigned char arr_2 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_2 [i_0] = (unsigned char)244;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
