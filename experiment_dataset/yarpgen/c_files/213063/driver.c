#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 45842473U;
unsigned short var_3 = (unsigned short)45093;
signed char var_4 = (signed char)-12;
unsigned int var_5 = 3096804236U;
_Bool var_6 = (_Bool)1;
long long int var_8 = 8401846936607655263LL;
unsigned short var_10 = (unsigned short)55065;
int zero = 0;
unsigned long long int var_11 = 7848552174500113907ULL;
signed char var_12 = (signed char)21;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
