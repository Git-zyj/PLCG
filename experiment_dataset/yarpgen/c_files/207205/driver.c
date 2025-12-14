#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-20;
unsigned char var_3 = (unsigned char)190;
unsigned long long int var_7 = 15514783935932668762ULL;
unsigned short var_8 = (unsigned short)18585;
int zero = 0;
int var_10 = -370760679;
unsigned char var_11 = (unsigned char)241;
_Bool var_12 = (_Bool)0;
signed char arr_2 [11] ;
void init() {
    for (size_t i_0 = 0; i_0 < 11; ++i_0) 
        arr_2 [i_0] = (i_0 % 2 == 0) ? (signed char)-7 : (signed char)6;
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
