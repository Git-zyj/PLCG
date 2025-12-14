#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)21;
unsigned long long int var_2 = 4662639648829663124ULL;
signed char var_10 = (signed char)-59;
int zero = 0;
unsigned char var_14 = (unsigned char)218;
signed char var_15 = (signed char)92;
unsigned long long int var_16 = 4053130859120359517ULL;
signed char var_17 = (signed char)85;
unsigned char var_18 = (unsigned char)132;
unsigned char var_19 = (unsigned char)86;
signed char arr_2 [18] [18] ;
void init() {
    for (size_t i_0 = 0; i_0 < 18; ++i_0) 
        for (size_t i_1 = 0; i_1 < 18; ++i_1) 
            arr_2 [i_0] [i_1] = (i_1 % 2 == 0) ? (signed char)-55 : (signed char)82;
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
