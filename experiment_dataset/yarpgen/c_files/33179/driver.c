#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-17279;
long long int var_5 = 5515047215287993955LL;
unsigned int var_18 = 1132235818U;
int zero = 0;
int var_19 = -2117730189;
unsigned char var_20 = (unsigned char)135;
unsigned int var_21 = 3161946869U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
