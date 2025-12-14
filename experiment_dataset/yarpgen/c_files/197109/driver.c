#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1304353408U;
int var_4 = -618298628;
short var_15 = (short)-28581;
unsigned int var_16 = 919298652U;
int zero = 0;
unsigned long long int var_17 = 5009212395209834663ULL;
signed char var_18 = (signed char)-9;
unsigned char var_19 = (unsigned char)206;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
