#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-81;
_Bool var_5 = (_Bool)0;
signed char var_6 = (signed char)-22;
signed char var_7 = (signed char)-58;
int zero = 0;
unsigned short var_11 = (unsigned short)55601;
unsigned char var_12 = (unsigned char)68;
long long int var_13 = 5272447994153964956LL;
int var_14 = 374426705;
signed char var_15 = (signed char)0;
long long int var_16 = -7418223823129185818LL;
_Bool arr_4 [20] [20] ;
void init() {
    for (size_t i_0 = 0; i_0 < 20; ++i_0) 
        for (size_t i_1 = 0; i_1 < 20; ++i_1) 
            arr_4 [i_0] [i_1] = (_Bool)1;
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
