#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned char var_9 = (unsigned char)135;
signed char var_10 = (signed char)29;
int zero = 0;
unsigned char var_20 = (unsigned char)172;
unsigned char var_21 = (unsigned char)251;
int var_22 = -332523472;
unsigned char var_23 = (unsigned char)19;
unsigned char var_24 = (unsigned char)207;
signed char var_25 = (signed char)-121;
_Bool arr_3 [13] ;
void init() {
    for (size_t i_0 = 0; i_0 < 13; ++i_0) 
        arr_3 [i_0] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
