#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1874976461;
signed char var_2 = (signed char)80;
unsigned short var_4 = (unsigned short)50054;
unsigned int var_7 = 2744619405U;
int zero = 0;
int var_11 = -2002406290;
unsigned int var_12 = 996197456U;
long long int var_13 = 4052804321988086094LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
