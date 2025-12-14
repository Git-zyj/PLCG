#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -143390507;
signed char var_5 = (signed char)60;
unsigned short var_7 = (unsigned short)22144;
unsigned int var_10 = 535274162U;
int zero = 0;
signed char var_19 = (signed char)-101;
short var_20 = (short)19789;
unsigned short var_21 = (unsigned short)20224;
short var_22 = (short)2245;
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
