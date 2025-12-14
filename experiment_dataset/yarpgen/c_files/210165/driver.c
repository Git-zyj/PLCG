#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1513327966;
unsigned int var_5 = 281976063U;
unsigned int var_6 = 4041221134U;
int var_7 = -1285403801;
long long int var_9 = -111889169037511519LL;
int zero = 0;
unsigned short var_10 = (unsigned short)46121;
signed char var_11 = (signed char)80;
short var_12 = (short)-3419;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
