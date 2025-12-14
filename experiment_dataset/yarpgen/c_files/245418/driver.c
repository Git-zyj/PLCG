#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-80;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned char var_12 = (unsigned char)146;
int var_13 = -1284797736;
signed char var_14 = (signed char)-64;
unsigned char var_15 = (unsigned char)11;
long long int var_16 = -3615511758867586495LL;
int zero = 0;
long long int var_20 = 8089702358164512528LL;
unsigned char var_21 = (unsigned char)120;
_Bool var_22 = (_Bool)1;
_Bool var_23 = (_Bool)0;
unsigned char var_24 = (unsigned char)232;
signed char arr_1 [10] ;
void init() {
    for (size_t i_0 = 0; i_0 < 10; ++i_0) 
        arr_1 [i_0] = (signed char)97;
}

void checksum() {
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
