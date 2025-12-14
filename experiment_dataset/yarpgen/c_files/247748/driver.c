#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)168;
_Bool var_6 = (_Bool)1;
_Bool var_7 = (_Bool)1;
unsigned long long int var_12 = 8197687393491730120ULL;
unsigned int var_18 = 602790588U;
int zero = 0;
long long int var_20 = 6441358782543727106LL;
unsigned char var_21 = (unsigned char)167;
unsigned short var_22 = (unsigned short)27032;
short var_23 = (short)-11542;
unsigned short var_24 = (unsigned short)12370;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
