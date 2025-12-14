#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)176;
unsigned int var_1 = 1513250243U;
signed char var_3 = (signed char)-85;
unsigned char var_5 = (unsigned char)201;
long long int var_6 = -2998246646775547810LL;
short var_7 = (short)-29256;
unsigned int var_8 = 4259437445U;
short var_9 = (short)-3669;
signed char var_10 = (signed char)73;
long long int var_11 = -47250847201852927LL;
short var_12 = (short)18858;
int zero = 0;
int var_15 = -1749035021;
int var_16 = -924974434;
long long int var_17 = -8446814328384661800LL;
int var_18 = -94067331;
short var_19 = (short)-14474;
unsigned int var_20 = 3920320335U;
short arr_0 [12] ;
void init() {
    for (size_t i_0 = 0; i_0 < 12; ++i_0) 
        arr_0 [i_0] = (short)32655;
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
