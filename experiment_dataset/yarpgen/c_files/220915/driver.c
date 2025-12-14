#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1879923949U;
signed char var_4 = (signed char)-105;
long long int var_15 = 7553352045833194140LL;
unsigned long long int var_16 = 10098015843437576305ULL;
int zero = 0;
long long int var_18 = -4461069632316798451LL;
unsigned short var_19 = (unsigned short)48964;
unsigned short var_20 = (unsigned short)24723;
long long int var_21 = 1662165056848431956LL;
int var_22 = -588037826;
unsigned short arr_4 [22] ;
void init() {
    for (size_t i_0 = 0; i_0 < 22; ++i_0) 
        arr_4 [i_0] = (unsigned short)43346;
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
