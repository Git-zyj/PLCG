#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1970354136;
short var_6 = (short)5228;
unsigned short var_9 = (unsigned short)47044;
unsigned char var_12 = (unsigned char)6;
int zero = 0;
unsigned short var_20 = (unsigned short)53355;
signed char var_21 = (signed char)-94;
int var_22 = 142275207;
signed char var_23 = (signed char)-65;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
