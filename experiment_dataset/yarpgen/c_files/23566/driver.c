#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_4 = (signed char)33;
unsigned char var_7 = (unsigned char)8;
unsigned char var_10 = (unsigned char)162;
unsigned long long int var_11 = 12509087530688161514ULL;
unsigned short var_12 = (unsigned short)54424;
int zero = 0;
long long int var_15 = 7288323963021188692LL;
signed char var_16 = (signed char)72;
signed char var_17 = (signed char)-127;
long long int var_18 = 1715664729744547193LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
