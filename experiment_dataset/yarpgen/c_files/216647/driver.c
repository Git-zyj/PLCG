#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11645921218830605005ULL;
_Bool var_3 = (_Bool)0;
int var_5 = -1987054849;
unsigned long long int var_6 = 8895422928155578805ULL;
unsigned short var_8 = (unsigned short)36021;
int zero = 0;
unsigned int var_10 = 2351563965U;
short var_11 = (short)24112;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
