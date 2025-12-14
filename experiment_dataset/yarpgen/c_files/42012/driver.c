#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3017389068U;
unsigned short var_2 = (unsigned short)12727;
unsigned int var_3 = 997878325U;
int var_4 = 1893054637;
int var_5 = 298959734;
unsigned long long int var_6 = 13712342723383638797ULL;
int var_7 = 2057747128;
_Bool var_8 = (_Bool)0;
int var_12 = -816145284;
int zero = 0;
signed char var_14 = (signed char)-32;
unsigned int var_15 = 3694937879U;
int var_16 = 1102968285;
void init() {
}

void checksum() {
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
