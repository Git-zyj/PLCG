#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_8 = (unsigned char)89;
_Bool var_11 = (_Bool)1;
unsigned char var_16 = (unsigned char)243;
int var_17 = -959661193;
int zero = 0;
_Bool var_18 = (_Bool)1;
int var_19 = 1036010165;
unsigned short var_20 = (unsigned short)23050;
unsigned long long int var_21 = 14357827710932870339ULL;
_Bool var_22 = (_Bool)0;
signed char arr_4 [24] [24] ;
void init() {
    for (size_t i_0 = 0; i_0 < 24; ++i_0) 
        for (size_t i_1 = 0; i_1 < 24; ++i_1) 
            arr_4 [i_0] [i_1] = (signed char)-119;
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
