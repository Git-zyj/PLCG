#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)58;
unsigned short var_5 = (unsigned short)62483;
signed char var_10 = (signed char)-55;
unsigned short var_12 = (unsigned short)8434;
unsigned char var_15 = (unsigned char)109;
unsigned short var_17 = (unsigned short)23019;
int zero = 0;
unsigned int var_19 = 292226719U;
signed char var_20 = (signed char)-13;
signed char var_21 = (signed char)-34;
long long int var_22 = 2138455715485175196LL;
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
