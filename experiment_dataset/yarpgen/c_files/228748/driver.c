#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-112;
unsigned char var_3 = (unsigned char)247;
_Bool var_6 = (_Bool)0;
signed char var_7 = (signed char)76;
unsigned char var_8 = (unsigned char)90;
_Bool var_10 = (_Bool)1;
unsigned int var_11 = 3689884074U;
int zero = 0;
unsigned short var_12 = (unsigned short)35621;
signed char var_13 = (signed char)79;
long long int var_14 = -409483109335910840LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
