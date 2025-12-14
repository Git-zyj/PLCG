#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43840;
short var_1 = (short)25481;
unsigned short var_5 = (unsigned short)10080;
unsigned short var_6 = (unsigned short)14235;
int zero = 0;
int var_11 = -1927093562;
unsigned long long int var_12 = 6211961437562622006ULL;
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
