#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)94;
signed char var_2 = (signed char)-89;
unsigned int var_4 = 3517917357U;
_Bool var_7 = (_Bool)0;
int var_9 = -1339917636;
signed char var_10 = (signed char)54;
unsigned int var_13 = 1397879907U;
unsigned int var_16 = 3275784631U;
int zero = 0;
unsigned char var_18 = (unsigned char)108;
unsigned char var_19 = (unsigned char)181;
unsigned long long int var_20 = 8704490694806745152ULL;
unsigned char var_21 = (unsigned char)239;
unsigned char arr_0 [16] ;
void init() {
    for (size_t i_0 = 0; i_0 < 16; ++i_0) 
        arr_0 [i_0] = (unsigned char)98;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
