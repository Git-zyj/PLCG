#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_5 = (short)27869;
int var_12 = -602291874;
unsigned char var_13 = (unsigned char)110;
int zero = 0;
unsigned short var_17 = (unsigned short)9578;
short var_18 = (short)-15250;
unsigned int var_19 = 2928176524U;
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
