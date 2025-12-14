#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)5;
unsigned long long int var_11 = 2844220997543428483ULL;
unsigned long long int var_18 = 7205333468455739552ULL;
int zero = 0;
unsigned char var_19 = (unsigned char)25;
unsigned char var_20 = (unsigned char)231;
unsigned char var_21 = (unsigned char)163;
unsigned short var_22 = (unsigned short)62156;
unsigned long long int var_23 = 9079038291761911772ULL;
unsigned char var_24 = (unsigned char)185;
int arr_1 [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        arr_1 [i_0] = 362992038;
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
