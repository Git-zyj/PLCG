#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -418687801;
signed char var_7 = (signed char)-58;
short var_12 = (short)27319;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_19 = (unsigned char)206;
unsigned short var_20 = (unsigned short)25251;
unsigned short var_21 = (unsigned short)55397;
unsigned int var_22 = 3167586551U;
void init() {
}

void checksum() {
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
