#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)13080;
unsigned int var_1 = 2820066838U;
int var_2 = 1313530389;
unsigned int var_3 = 3223067231U;
_Bool var_4 = (_Bool)1;
unsigned long long int var_6 = 12437304748355527387ULL;
short var_7 = (short)7486;
unsigned short var_8 = (unsigned short)14841;
unsigned long long int var_12 = 5865692445810286692ULL;
int zero = 0;
short var_15 = (short)-21669;
unsigned int var_16 = 3035797706U;
signed char var_17 = (signed char)-72;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
