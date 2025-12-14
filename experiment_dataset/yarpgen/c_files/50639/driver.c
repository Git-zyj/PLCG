#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25735;
unsigned int var_2 = 443679378U;
_Bool var_3 = (_Bool)1;
int var_5 = -1961547526;
unsigned char var_9 = (unsigned char)118;
unsigned int var_13 = 1145539225U;
int zero = 0;
unsigned int var_17 = 1881885105U;
short var_18 = (short)-5970;
void init() {
}

void checksum() {
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
